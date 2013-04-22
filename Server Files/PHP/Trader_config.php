<?php
/*
Trader Config for DayZ Epoch 
Use at your own risk this code may have bugs. 
*/

error_reporting(E_ALL);
ini_set('display_errors', '1');

$host = "localhost";
$port = "3306";
$user = "USER";
$db = "dayz_epoch";
$pass = "PASS";

$mysqli = new mysqli($host, $user, $pass, $db, $port);


print("<br/>");
print("<a href='?instance=11'>Chernarus #11 Traders</a><br/>");
print("<a href='?instance=6'>Dingor #6 Traders</a><br/>");
print("<a href='?instance=1'>Takistan #1 Traders</a><br/>");
print("<a href='?instance=4'>Zargabad #4 Traders</a><br/>");
print("<a href='?instance=13'>Taviana #13 Traders</a><br/>");

// Currency Classnames
$bars_array = array("ItemAluminumBar","ItemTinBar","ItemCopperBar","ItemCopperBar10oz","ItemSilverBar","ItemSilverBar10oz","ItemGoldBar","ItemGoldBar10oz");
			
function buildHTMLselect ($array,$name) {
	$html_tmp = '<select name="'.$name.'">';
	foreach ($array as $bar) {
		$html_tmp .= '<option value="'.$bar.'">'.$bar.'</option>';
	}
	$html_tmp .= '</select>';
	return $html_tmp;
}

$buy_html_tmp = buildHTMLselect($bars_array,"selected_buy_bar");
$sell_html_tmp = buildHTMLselect($bars_array,"selected_sell_bar");

function buildHTMLselected ($array,$name,$buy_item) {
	$buy_html = '<select name="'.$name.'">';
	foreach ($array as $bar) {
		if($buy_item == $bar) {
			$buy_html .= '<option selected="selected" value="'.$bar.'">'.$bar.'</option>';
		} else {
			$buy_html .= '<option value="'.$bar.'">'.$bar.'</option>';
		}
	}
	$buy_html .= '</select>';
	return $buy_html;
}

function traderConfigStart ($desc,$name) {
	return "
// $desc
menu_".$name." = [
	[";
}

function traderConfigEnd ($static,$status) {
	return "],
	[".$static."],
	\"".$status."\"
];";
}

function get_tids ($trader_id) {
	global $host;
	global $port;
	global $user;
	global $db;
	global $pass;

	$mysqli = new mysqli($host, $user, $pass, $db, $port);
	
	// Get Traders array from database
	if ($stmt = $mysqli->prepare("SELECT `id`, `name`, `trader` FROM `trader_tids` WHERE trader=?")) {

		$stmt->bind_param("i", $trader_id);
		$stmt->execute();
		$stmt->bind_result($id, $name, $trader);
		
		$format_output = "";
		while ($stmt->fetch()) {
			$format_output .= '["'.$name.'",'.$id.'],';
			printf("<a target='_blank' href='?tid=%d'>%s</a><br/>", $id,$name);
		}

		return $format_output;
		$stmt->close();
	} else {
		echo 'error 91';
	}
}

function add_item($item_class,$item_type,$item_group,$item_afile) {
	global $host;
	global $port;
	global $user;
	global $db;
	global $pass;

	$mysqli = new mysqli($host, $user, $pass, $db, $port);
	if ($stmt = $mysqli->prepare("INSERT INTO `trader_items` (`classname`,`type`,`group`,`afile`) VALUES (?,?,?,?)")) {

		$stmt->bind_param("siss", $item_class, $item_type, $item_group, $item_afile);

		/* execute query */
		$stmt->execute();

		printf("%d Row Updated.\n", $stmt->affected_rows);
		$stmt->close();
	} else {
		echo 'error 107';
	}
}


// add_traders_data($item,$qty,$buy,$sell,$order,$new_id,$afile);
function add_traders_data($item,$qty,$buy,$sell,$order,$new_id,$afile) {
	global $host;
	global $port;
	global $user;
	global $db;
	global $pass;

	$mysqli = new mysqli($host, $user, $pass, $db, $port);
	if ($stmt = $mysqli->prepare("INSERT INTO `traders_data` (`item`,`qty`,`buy`,`sell`,`order`,`tid`,`afile`) VALUES (?,?,?,?,?,?,?)")) {

		$stmt->bind_param("sissiis", $item, $qty, $buy, $sell, $order, $new_id,$afile);

		/* execute query */
		$stmt->execute();

		printf("%d Row Updated.\n", $stmt->affected_rows);
		$stmt->close();
	} else {
		echo 'error 125';
	}
}

function fill_with_template($tid,$new_id){
	global $host;
	global $port;
	global $user;
	global $db;
	global $pass;

	$mysqli = new mysqli($host, $user, $pass, $db, $port);
	// Find all items from template and add to new tid
	if ($stmt = $mysqli->prepare("SELECT `item`, `qty`, `buy`, `sell`, `order`, `afile` FROM `traders_data` WHERE tid=?")) {
		$stmt->bind_param("i", $tid);
		$stmt->execute();
		$stmt->bind_result($item, $qty ,$buy, $sell, $order, $afile );
		
		while ($stmt->fetch()) {
		
			add_traders_data($item,$qty,$buy,$sell,$order,$new_id,$afile);
			
		}
		$stmt->close();
	} else {
		echo 'error 144';
	}
}



// perform trader additions here
if(isset($_POST['trader_classname']) && isset($_POST['trader_instance'])) {

	$stmt = $mysqli->prepare("INSERT INTO `server_traders` (`classname`, `instance`, `status`, `static`, `desc`) VALUES (?,?,?,?,?)");
		
	if ( false===$stmt ) {
	  die('prepare() failed: ' . htmlspecialchars($mysqli->error));
	}
	
	$trader_classname = $_POST['trader_classname'];
	$trader_instance = (int)$_POST['trader_instance'];
	$trader_status = $_POST['trader_status'];
	$trader_static = ""; // $_POST['trader_static'];
	$trader_desc = $_POST['trader_desc'];
	
	$rc = $stmt->bind_param("sisss", $trader_classname, $trader_instance, $trader_status, $trader_static, $trader_desc);
	
	if ( false===$rc ) {
	  die('bind_param() failed: ' . htmlspecialchars($stmt->error));
	}
	
	/* execute query */
	$rc = $stmt->execute();
	
	if ( false===$rc ) {
	  die('execute() failed: ' . htmlspecialchars($stmt->error));
	}
	
	printf("%d Row Updated.\n", $stmt->affected_rows);
	$stmt->close();
}

// perform tid additions here
if(isset($_POST['cat_name']) && !empty($_POST['cat_name']) && isset($_POST['trader_id'])) {

	if ($stmt = $mysqli->prepare("INSERT INTO `trader_tids` (`name`, `trader`) VALUES (?,?)")) {
			
		$cat_name = $_POST['cat_name'];
		$trader_id = $_POST['trader_id'];
		
		$stmt->bind_param("si", $cat_name, $trader_id);
		
		/* execute query */
		$stmt->execute();
		
		printf("%d Row Updated.\n", $stmt->affected_rows);
		$stmt->close();
	} else {
		echo 'error 198';
	}
}

// perform fill with template for existing tid
if(isset($_POST['trader_template']) && !empty($_POST['trader_template']) && isset($_POST['t_id'])) {
	fill_with_template($_POST['trader_template'],$_POST['t_id']);
};

// perform tid + template additions here
if(isset($_POST['trader_template']) && !empty($_POST['trader_template']) && isset($_POST['trader_id'])) {

	// find trader name
	if ($stmt = $mysqli->prepare("SELECT `id`, `name`, `trader` FROM `trader_tids` WHERE `id` = ?")) {

		$stmt->bind_param("i", $_POST['trader_template']);
		$stmt->execute();
		$stmt->bind_result($id, $cat_name ,$trader);

		$stmt->fetch();

		$stmt->close();
	} else {
		echo 'error 221';
	}

	if ($stmt = $mysqli->prepare("INSERT INTO `trader_tids` (`name`, `trader`) VALUES (?,?)")) {
			
		$trader_id = $_POST['trader_id'];
		
		$stmt->bind_param("si", $cat_name, $trader_id);
		$stmt->execute();
		
		printf("%d Row Updated.\n", $stmt->insert_id);
		
		$new_id = $stmt->insert_id;
		
		$stmt->close();
	} else {
		echo 'error 237';
	}
	
	// Find all items from template and add to new tid
	if ($stmt = $mysqli->prepare("SELECT `item`, `qty`, `buy`, `sell`, `order`, `afile` FROM `traders_data` WHERE tid=?")) {
		$stmt->bind_param("i", $_POST['trader_template']);
		$stmt->execute();
		$stmt->bind_result($item, $qty ,$buy, $sell, $order, $afile );
		
		while ($stmt->fetch()) {		
			add_traders_data($item,$qty,$buy,$sell,$order,$new_id,$afile);
		}
		$stmt->close();
	} else {
		echo 'error 251';
	}
}

// perform add item to with tid
if(isset($_POST['add_item']) && !empty($_POST['add_item']) && isset($_GET['tid'])) {
	$add_item_raw = $_POST['add_item'];
	
	$add_item_raw = explode(",",$add_item_raw);
	
	$add_itemname = $add_item_raw[2];
	
	$add_stock = (int)$_POST['add_stock'];
	
	$tid = (int)$_GET['tid']; 
	
	$name = '["'.$add_itemname.'",'.$add_item_raw[0].']';
	
	$buy = $_POST['buy'];
	$buy_bar = $_POST['selected_buy_bar'];
	// [4,"ItemGoldBar",1]
	$buy_formatted = '['.$buy.',"'.$buy_bar .'",1]';
	
	$sell = $_POST['sell'];
	$sell_bar = $_POST['selected_sell_bar'];
	// [4,"ItemGoldBar",1]
	$sell_formatted = '['.$sell.',"'.$sell_bar .'",1]';
	
	$afile = $add_item_raw[1];
	
	if ($stmt = $mysqli->prepare("INSERT INTO `traders_data` (`id`, `item`, `qty`, `buy`, `sell`, `tid`, `afile`) VALUES (null, ?, ?, ?, ?, ?, ?)")) {
		
		$stmt->bind_param("sissis", $name, $add_stock, $buy_formatted, $sell_formatted, $tid, $afile);
		
		$stmt->execute();
		
		printf("%d Row Updated.\n", $stmt->affected_rows);
		$stmt->close();
	} else {
		echo 'error 290';
	}
}

// Allow dump of all vehicles in the database to use for dynamic_vehicle.sqf
if(isset($_GET['show_dvs'])){
	
	if ($stmt = $mysqli->prepare("SELECT `item` FROM `traders_data` WHERE `afile`='trade_any_vehicle' OR `afile`='trade_any_boat' GROUP BY `item` ORDER BY `item` ASC")) {

		$stmt->execute();
		$stmt->bind_result($item);

		// START PER TRADER CONFIG";		
		$build_DVS_html = "<pre>AllowedVehiclesList = [\n";
		$counter = 0;
		while ($stmt->fetch()) {
		
			$item = trim($item ,"[]");
			$item = explode(",",$item);
			
			$pos = strrpos($item[0], "SUV");
			if ($pos === false) { // note: three equal signs
				$number = 5;
			} else {
				$number = 1;
			}
			
			$counter = $counter + $number;
			$build_DVS_html .= '['.$item[0].','.$number."],\n";
		}
		
		$final_DVS = rtrim($build_DVS_html,",\n");
		$final_DVS .= "\n];</pre>";
		
		$stmt->close();
	} else {
		echo 'error 326';
	}
	
	echo $final_DVS;
	echo "Total Vehicles: ". $counter;
}

if(isset($_GET['instance'])){
	$instance = (int)$_GET['instance'];
	
	// get all tids for templates
	if ($stmt = $mysqli->prepare("SELECT `id`, `name`, `trader` FROM `trader_tids` ORDER BY `name` ASC")) {
		$stmt->execute();
		$stmt->bind_result($id, $name ,$trader);
		$build_tid_html = '<select name="trader_template">';
		while ($stmt->fetch()) {
			$build_tid_html .= '<option value="'.$id.'">'.$name.' - #'.$id.'</option>';
		}		
		$build_tid_html .= '</select>';
		$stmt->close();
	} else {
		echo 'error 347';
	}
	
	// add trader html
	echo "<form method='post' action='?instance=".$instance."'><input type='hidden' name='trader_instance' value='".$instance."'>
			Classname: <input type='text' name='trader_classname' value=''>
			Description: <input type='text' name='trader_desc' value=''>
			<select name=\"trader_status\">
				<option value=\"friendly\">friendly</option>
				<option value=\"neutral\">neutral</option>
				<option value=\"hostile\">hostile</option>
				<option value=\"friendly\">hero</option>
			</select>
			<input type='submit' value='Add Trader'></form>";
	
	// Get Traders array from database
	if ($stmt = $mysqli->prepare("SELECT `id`, `classname`, `instance`, `status`, `static`, `desc` FROM `server_traders` WHERE instance=?")) {

		$stmt->bind_param("i", $instance);
		$stmt->execute();
		$stmt->bind_result($id, $name ,$instance, $status, $static, $desc);

		$make_traders_list = "";
		$per_trader_config = "";
		
		while ($stmt->fetch()) {
			
			printf("<h1>%s</h1><p>%s - %s</p>",$desc,$name,$status);
			
			echo "<form method='post' action='?instance=".$instance."'><input type='hidden' name='trader_id' value='".$id."'>
			Add Trader Category <input type='text' name='cat_name' value=''>
			<input type='submit' value='Add New TID'></form>";
			
			echo "<form method='post' action='?instance=".$instance."'><input type='hidden' name='trader_id' value='".$id."'>
			Use Template Category: ".$build_tid_html."
			<input type='submit' value='Add New TID Using Template'></form>";
			
			$make_traders_list .= '"'.$name.'",';

			$per_trader_config .= traderConfigStart($desc,$name);
			// find all tids for trader
			$per_trader_config .= rtrim(get_tids ($id),",");	
			$per_trader_config .= traderConfigEnd($static,$status);
		}
		$stmt->close();
	} else {
		echo 'error';
	}
	
	$make_traders_list_text = "// DayZ Epoch TRADERS for $instance
serverTraders = [";

	$make_traders_list_text .= rtrim($make_traders_list,",");
	$make_traders_list_text .= '];';
	$make_traders_list_text .= $per_trader_config;
	
	if(isset($_GET['show_config'])) {
		echo "<pre>".print_r($make_traders_list_text,1)."</pre>";
	}
}

// if trader id is selected
if(isset($_GET['tid'])){
	$tid = (int)$_GET['tid'];
	
	// get all tids for templates
	if ($stmt = $mysqli->prepare("SELECT `id`, `name`, `trader` FROM `trader_tids` ORDER BY `name` ASC")) {

		$stmt->execute();
		$stmt->bind_result($id, $name ,$trader);

		$build_tid_html = '<select name="trader_template">';

		while ($stmt->fetch()) {
			$build_tid_html .= '<option value="'.$id.'">'.$name.' - #'.$id.'</option>';
		}
		
		$build_tid_html .= '</select>';
		
		$stmt->close();
	} else {
		echo 'error';
	}
	
	if(isset($_POST['delete_item'])){
		echo "REMOVED ITEM";
		echo "<pre>".print_r($_POST,1)."</pre>";
		if ($stmt = $mysqli->prepare("DELETE FROM `traders_data` WHERE `id` = ?")) {
			
			$stmt->bind_param("i", $_POST['delete_id']);
			
			/* execute query */
			$stmt->execute();
			
			printf("%d Row Updated.\n", $stmt->affected_rows);
			$stmt->close();
		} else {
			echo 'error';
		}
	}
	
	if(isset($_POST['stock'])){
		echo "UPDATING STOCK";
		echo "<pre>".print_r($_POST,1)."</pre>";
		if ($stmt = $mysqli->prepare("UPDATE `traders_data` SET `qty` = ? WHERE `id` = ?")) {
			
			$stock = $_POST['stock'];
			$upd_id = $_POST['item_id'];
			
			$stmt->bind_param("ii", $stock, $upd_id);
			
			/* execute query */
			$stmt->execute();
			
			printf("%d Row Updated.\n", $stmt->affected_rows);
			$stmt->close();
		} else {
			echo 'error';
		}
	}

	if(isset($_POST['update_price'])){
		echo "UPDATING Prices";
		echo "<pre>".print_r($_POST,1)."</pre>";
		
		if(isset($_POST['bulk_checkbox'])){
			$query = "UPDATE `traders_data` SET `buy` = ?, `sell` = ? WHERE `item` = ?";
			$item = $_POST['update_price'];
		} else {
			$query = "UPDATE `traders_data` SET `buy` = ?, `sell` = ? WHERE `id` = ?";
			$item = $_POST['update_id'];
		}
		
		if ($stmt = $mysqli->prepare($query)) {
			
			$buy = $_POST['buy'];
			$buy_bar = $_POST['selected_buy_bar'];
			// [4,"ItemGoldBar",1]
			$buy_formatted = '['.$buy.',"'.$buy_bar .'",1]';
			
			$sell = $_POST['sell'];
			$sell_bar = $_POST['selected_sell_bar'];
			// [4,"ItemGoldBar",1]
			$sell_formatted = '['.$sell.',"'.$sell_bar .'",1]';
			
			$stmt->bind_param("sss", $buy_formatted, $sell_formatted, $item);
			
			/* execute query */
			$stmt->execute();
			
			printf("%d Row Updated.\n", $stmt->affected_rows);
			$stmt->close();
		} else {
			echo 'error';
		}
	}

	echo "<h1>#".$tid."</h1>";

	// get item list
	if ($stmt = $mysqli->prepare("SELECT `id`, `classname`, `type`, `group`, `afile` FROM `trader_items` ORDER BY `group` ASC")) {

		$stmt->execute();
		$stmt->bind_result($id, $name ,$type, $group, $afile);
		$item_templates = '';
		
		while ($stmt->fetch()) {
			 $item_templates .= '<option value="'.$type.','.$afile.','.$name.'">'.$group.' - '.$name.'</option>';
		}
		$stmt->close();
	} else {
		echo 'error';
	}
	
	echo "<form method='post' action='?tid=".$tid."'><input type='hidden' name='t_id' value='".$tid."'>
	Use Template Category: ".$build_tid_html."
	<input type='submit' value='Add All items from Template'></form>";
	
	printf ("<div class=\"alert alert-info\">

            <form method='post' action='?tid=".$tid."'>
			<select name=\"add_item\">
				".$item_templates."
			</select>
			QTY <input type='text' name='add_stock' value='1'><br/>
			BUY <input type='text' name='buy' value='1'> ".$buy_html_tmp."<br/>
			SELL <input type='text' name='sell' value='1'> ".$sell_html_tmp."<br/>
			<input type='submit' value='Add Item'></form></div>");
	
	if ($stmt = $mysqli->prepare("SELECT `item`, `qty`, `buy`, `sell`, `id` FROM `traders_data` WHERE tid=?")) {
		
		$stmt->bind_param("s", $tid);
		$stmt->execute();
		$stmt->bind_result($name_raw, $qty ,$buy_raw, $sell_raw, $id );
		
		while ($stmt->fetch()) {
			$name = trim($name_raw ,"[]");
			$name = explode(",",$name);
			
			$buy = trim($buy_raw ,"[]");
			$buy = explode(",",$buy);
			
			$buy_qty = $buy[0];
			$buy_item = trim($buy[1], '"');
			$buy_type = $buy[2];
			
			$sell = trim($sell_raw ,"[]");
			$sell = explode(",",$sell);
			
			$sell_qty = $sell[0];
			$sell_item = trim($sell[1], '"');
			$sell_type = $sell[2];
			
			$buy_html = buildHTMLselected ($bars_array,"selected_buy_bar",$buy_item);
			$sell_html = buildHTMLselected ($bars_array,"selected_sell_bar",$sell_item);
			
			printf ("<h2><form method='post' action='?tid=".$tid."'> %s <input type='submit' name='delete_item' value='X'><input type='hidden' name='delete_id' value='%s'></form></h2> <form method='post' action='?tid=".$tid."'> Stock: <input type='hidden' name='item_id' value='%s'><input type='text' name='stock' value='%s'> <input type='submit' value='Update Stock'></form><br/>", trim($name[0], '"'), $id, $id, $qty );
			
			printf ("<form method='post' action='?tid=".$tid."'>
			<input type='hidden' name='update_price' value='%s'>
			<input type='hidden' name='update_id' value='%s'>
			BUY <input type='text' name='buy' value='%s'> ".$buy_html."<br/>
			SELL <input type='text' name='sell' value='%s'> ".$sell_html."<br/>
			<label><input type='checkbox' name='bulk_checkbox' value='bulk' /> Bulk Update</label>
			<input type='submit' value='Update Price'></form>", $name_raw, $id, $buy_qty, $sell_qty );	
		}
		$stmt->close();
	} else {
		echo 'error';
	}
}

?>
