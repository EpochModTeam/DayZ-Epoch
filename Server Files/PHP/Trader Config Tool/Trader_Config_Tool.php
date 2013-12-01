<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>DayZ Epoch</title>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="">
    <meta name="author" content="">

    <!-- CSS -->
    <link href="/bootstrap/css/bootstrap.css" rel="stylesheet">
    <style type="text/css">

            /* Sticky footer styles
            -------------------------------------------------- */

        html,
        body {
            height: 100%;
            /* The html and body elements cannot have any padding or margin. */
            background: #000 url(bg.jpg) no-repeat center 0;
        }

            /* Wrapper for page content to push down footer */
        #wrap {
            min-height: 100%;
            height: auto !important;
            height: 100%;
            /* Negative indent footer by it's height */
            margin: 0 auto -60px;
        }

            /* Set the fixed height of the footer here */
        #push,
        #footer {
            height: 60px;
        }

        #footer {
            background-color: #f5f5f5;
        }

            /* Lastly, apply responsive CSS fixes as necessary */
        @media (max-width: 1200px) {
            #footer {
                margin-left: -20px;
                margin-right: -20px;
                padding-left: 20px;
                padding-right: 20px;
            }
        }

            /* Custom page CSS
            -------------------------------------------------- */
            /* Not required for template or sticky footer method. */

        .container {
            width: auto;
            max-width: 1000px;
        }

        .container .credit {
            margin: 20px 0;
        }

    </style>
    <link href="/bootstrap/css/bootstrap-responsive.css" rel="stylesheet">

    <!-- HTML5 shim, for IE6-8 support of HTML5 elements -->
    <!--[if lt IE 9]>
    <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->

    <!-- Fav and touch icons -->
    <link rel="shortcut icon" href="/bootstrap/ico/favicon.ico">
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="/bootstrap/ico/apple-touch-icon-144-precomposed.png">
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="/bootstrap/ico/apple-touch-icon-114-precomposed.png">
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="/bootstrap/ico/apple-touch-icon-72-precomposed.png">
    <link rel="apple-touch-icon-precomposed" href="/bootstrap/ico/apple-touch-icon-57-precomposed.png">
</head>

<body>


<!-- Part 1: Wrap all page content here -->
<div id="wrap">

<!-- Begin page content -->
<div class="container">
<div class="well">
    <div class="page-header">
        <img src="dayz_epoch_logo.png" alt="DayZ Epoch"> 

		<a class="btn btn-inverse" href="?instance=17">Edit Traders</a> 
		<a class="btn btn-inverse" href="?show_dvs=1">Dynamic Vehicle Config</a> 
		<a class="btn btn-inverse" href="?instance=17&show_config=1">Show Trader Config</a> 
		
    </div>
	<div class="well">
	
	
	
	


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

// Currency Classnames
$bars_array = array("ItemAluminumBar","ItemTinBar","ItemCopperBar","ItemCopperBar10oz","ItemSilverBar","ItemSilverBar10oz","ItemGoldBar","ItemGoldBar10oz","ItemBriefcase100oz");
$humanity_array = array("friendly","neutral","hostile","hero");
		
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

function get_tids ($trader_id,$instance) {
	global $host;
	global $port;
	global $user;
	global $db;
	global $pass;

	$mysqli = new mysqli($host, $user, $pass, $db, $port);
	
	// Get Traders array from database
	if ($stmt = $mysqli->prepare("SELECT `id`, `name`, `trader` FROM `trader_tids` WHERE trader=? ORDER BY `name` ASC")) {

		$stmt->bind_param("i", $trader_id);
		$stmt->execute();
		$stmt->bind_result($id, $name, $trader);
		
		$format_output = "";
		$format_output_tmp = "";
		while ($stmt->fetch()) {
			$format_output .= '["'.$name.'",'.$id.'],';
			$format_output_tmp .= $id.',';
			if(isset($_GET['inst'])){
				printf("<form method='post' action='?instance=%d&inst=%d'><a target='_blank' href='?tid=%d&inst=%d'>%s</a> <input type='submit' name='delete_tid' value='X'><input type='hidden' name='delete_id' value='%s'></form>", $instance,$_GET['inst'],$id,$_GET['inst'],$name,$id);
			} else {
				printf("<form method='post' action='?instance=%d'><a target='_blank' href='?tid=%d'>%s</a> <input type='submit' name='delete_tid' value='X'><input type='hidden' name='delete_id' value='%s'></form>", $instance,$id,$name,$id);
			}
		}
		echo $format_output_tmp;
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
	if ($stmt = $mysqli->prepare("INSERT IGNORE INTO `trader_items` (`classname`,`type`,`group`,`afile`) VALUES (?,?,?,?)")) {

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
	if ($stmt = $mysqli->prepare("INSERT IGNORE INTO `traders_data` (`item`,`qty`,`buy`,`sell`,`order`,`tid`,`afile`) VALUES (?,?,?,?,?,?,?)")) {

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

// perform trader desc edits here
if(isset($_POST['cat_name_edit']) && !empty($_POST['cat_name_edit']) && isset($_POST['trader_id'])) {

	if ($stmt = $mysqli->prepare("UPDATE `server_traders` SET `desc` = ?,`classname` = ?,`status` = ?,`static` = ? WHERE `id` = ?")) {
		
		$cat_name_edit = $_POST['cat_name_edit'];
		$cat_class_edit = $_POST['cat_class_edit'];
		$static_edit = $_POST['static_edit'];
		$new_trader_status = $_POST['new_trader_status'];
		
		$trader_id = $_POST['trader_id'];
		
		$stmt->bind_param("ssssi", $cat_name_edit, $cat_class_edit, $new_trader_status, $static_edit, $trader_id);
		
		/* execute query */
		$stmt->execute();
		
		printf("%d Row Updated.\n", $stmt->affected_rows);
		$stmt->close();
	} else {
		echo 'error';
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
	
	if ($stmt = $mysqli->prepare("INSERT IGNORE INTO `traders_data` (`id`, `item`, `qty`, `buy`, `sell`, `tid`, `afile`) VALUES (null, ?, ?, ?, ?, ?, ?)")) {
		
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
			
			// force everything to 1 
			$number = 1;
			
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
	
	if(isset($_POST['delete_tid'])){
		echo "REMOVED TID";
		echo "<pre>".print_r($_POST,1)."</pre>";
		if ($stmt = $mysqli->prepare("DELETE FROM `trader_tids` WHERE `id` = ?")) {
			
			$stmt->bind_param("i", $_POST['delete_id']);
			
			/* execute query */
			$stmt->execute();
			
			printf("%d Row Updated.\n", $stmt->affected_rows);
			$stmt->close();
		} else {
			echo 'error';
		}
	}
	
	
	$filter = "";
	$traders_name = array();
	// filter templates based on another instance 
	if(isset($_GET['inst'])) {
		$inst_raw = (int)$_GET['inst'];
		$filter = "&inst=".$inst_raw;
		if ($stmt = $mysqli->prepare("SELECT `id`, `classname`, `instance`, `status`, `static`, `desc` FROM `server_traders` WHERE instance=?")) {

			$stmt->bind_param("i", $_GET['inst']);
			$stmt->execute();
			$stmt->bind_result($idFilter, $nameFilter ,$instanceFilter, $statusFilter, $staticFilter, $descFilter);
			
			$traders_id = "WHERE ";
			
			
			while ($stmt->fetch()) {
				$traders_id .= "`trader` = ".$idFilter." OR ";
				$traders_name[$idFilter] = $nameFilter." ". $descFilter;
			}		
			
			$stmt->close();
		}

		$traders_id = rtrim($traders_id," OR ");
		
	} else {
		$traders_id = "";
	}
	
	
	// get all tids for templates
	if ($stmt = $mysqli->prepare("SELECT `id`, `name`, `trader` FROM `trader_tids` ".$traders_id." ORDER BY `name` ASC")) {
		$stmt->execute();
		$stmt->bind_result($id, $name ,$trader);
		$build_tid_html = '<select name="trader_template">';
		while ($stmt->fetch()) {
			if(isset($traders_name[$trader])){
				$build_tid_html .= '<option value="'.$id.'">'.$name.' - #'.$id.' ('.$traders_name[$trader].')</option>';
			} else {
				$build_tid_html .= '<option value="'.$id.'">'.$name.' - #'.$id.'</option>';
			}
		}		
		$build_tid_html .= '</select>';
		$stmt->close();
	} else {
		echo 'error 347';
	}

	
	// add trader html
	echo "<form method='post' action='?instance=".$instance.$filter."'><input type='hidden' name='trader_instance' value='".$instance."'>
			Classname: <input type='text' name='trader_classname' value=''>
			Description: <input type='text' name='trader_desc' value=''>
			".buildHTMLselect($humanity_array,"trader_status")."<br/>
			<input type='submit' value='Add Trader'></form>";
	
	// Get Traders array from database
	if ($stmt = $mysqli->prepare("SELECT `id`, `classname`, `instance`, `status`, `static`, `desc` FROM `server_traders` WHERE instance=?")) {

		$stmt->bind_param("i", $instance);
		$stmt->execute();
		$stmt->bind_result($id, $name ,$instance, $status, $static, $desc);

		$make_traders_list = "";
		$per_trader_config = "";
		
		while ($stmt->fetch()) {
			
			printf("<h1>%s<a name='%s'></a></h1><p>%s - %s</p>",$desc,$name,$name,$status);
			
			echo "<form method='post' action='?instance=".$instance.$filter."'><input type='hidden' name='trader_id' value='".$id."'>
			<input type='text' name='cat_name_edit' value='$desc'>
			<input type='text' name='cat_class_edit' value='$name'>
			
			".buildHTMLselected($humanity_array,"new_trader_status",$status)."<br/>
			<input type='text' size='50' name='static_edit' value='$static'>
			<input type='submit' value='Edit'></form>";
			
			echo "<form method='post' action='?instance=".$instance.$filter."'><input type='hidden' name='trader_id' value='".$id."'>
			Add Trader Category <input type='text' name='cat_name' value=''>
			<input type='submit' value='Add New TID'></form>";
			
			echo "<form method='post' action='?instance=".$instance.$filter."'><input type='hidden' name='trader_id' value='".$id."'>
			Use Template Category: ".$build_tid_html."
			<input type='submit' value='Add New TID Using Template'></form>";
			
			$make_traders_list .= '"'.$name.'",';

			$per_trader_config .= traderConfigStart($desc,$name);
			// find all tids for trader
			$per_trader_config .= rtrim(get_tids ($id,$instance),",");	
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
	
	$traders_name = array();
	$filter = "";
	// filter templates based on another instance 
	if(isset($_GET['inst'])) {
		$inst_raw = (int)$_GET['inst'];
		$filter = "&inst=".$inst_raw;
		if ($stmt = $mysqli->prepare("SELECT `id`, `classname`, `instance`, `status`, `static`, `desc` FROM `server_traders` WHERE instance=?")) {

			$stmt->bind_param("i", $_GET['inst']);
			$stmt->execute();
			$stmt->bind_result($idFilter, $nameFilter ,$instanceFilter, $statusFilter, $staticFilter, $descFilter);

			$traders_id = "WHERE ";
			
			
			while ($stmt->fetch()) {
				$traders_id .= "`trader` = ".$idFilter." OR ";
				$traders_name[$idFilter] = $nameFilter." ". $descFilter;
			}		
			
			$stmt->close();
		}

		$traders_id = rtrim($traders_id," OR ");
		
	} else {
		$traders_id = "";
	}
	// get all tids for templates
	if ($stmt = $mysqli->prepare("SELECT `id`, `name`, `trader` FROM `trader_tids` ".$traders_id." ORDER BY `name` ASC")) {

		$stmt->execute();
		$stmt->bind_result($id, $name ,$trader);

		$build_tid_html = '<select name="trader_template">';

		while ($stmt->fetch()) {
			if(isset($traders_name[$trader])){
				$build_tid_html .= '<option value="'.$id.'">'.$name.' - #'.$id.' ('.$traders_name[$trader].')</option>';
			} else {
				$build_tid_html .= '<option value="'.$id.'">'.$name.' - #'.$id.'</option>';
			}
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
	
	echo "<form method='post' action='?tid=".$tid.$filter."'><input type='hidden' name='t_id' value='".$tid."'>
	Use Template Category: ".$build_tid_html."
	<input type='submit' value='Add All items from Template'></form>";
	
	printf ("<div class=\"alert alert-info\">

            <form method='post' action='?tid=".$tid.$filter."'>
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
			
			printf ("<h2><form method='post' action='?tid=".$tid.$filter."'> %s <input type='submit' name='delete_item' value='X'><input type='hidden' name='delete_id' value='%s'></form></h2> <form method='post' action='?tid=".$tid.$filter."'> Stock: <input type='hidden' name='item_id' value='%s'><input type='text' name='stock' value='%s'> <input type='submit' value='Update Stock'></form><br/>", trim($name[0], '"'), $id, $id, $qty );
			
			printf ("<form method='post' action='?tid=".$tid.$filter."'>
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








	
	
	</div>

</div>

</div>

<div id="push"></div>
</div>

<div id="footer">
    <div class="container">
        <p class="muted credit">Sponsored by <a href="http://eltexonline.com">ElTexOnline LLC</a> and <a
                href="http://voicecommandcenter.com">VoiceCommandCenter.com</a>.</p>
    </div>
</div>


<!-- Le javascript
================================================== -->
<!-- Placed at the end of the document so the pages load faster -->
<script src="/bootstrap/js/jquery.js"></script>
<script src="/bootstrap/js/bootstrap.js"></script>
<script>
    $('#myTab a').click(function (e) {
        e.preventDefault();
        $(this).tab('show');
    })
</script>

</body>
</html>