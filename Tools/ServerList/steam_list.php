<pre>
	<?php
	/*
		Example of how to get server list from steam. Works for both Arma 2 and 3 servers
		Original Source: https://developer.valvesoftware.com/wiki/User:Pizzahut/test.php
	*/

	$master_servers = array("hl2master.steampowered.com");

	define("MIN_PORT", 27010); // Range of port numbers which the master servers
	define("MAX_PORT", 27013); // potentially use.
	// define("FILTER", '\gamedir\arma3'); // A3
	define("FILTER", '\gamedir\arma2arrowpc'); // A2
	define("REGION", "\xFF"); // region = world
	define("TIMEOUT", 2.0); // 2s timeout

	function query_timeout(&$socket, $seed)
	{
	   echo "Sending query to master server.\n";
	   stream_set_timeout($socket, TIMEOUT);
	   if (!fwrite($socket, "1".REGION."$seed\0".FILTER."\0"))
	   {
	      fclose($socket);
	      exit("fwrite error\n");
	   }

	   echo "Reading response header.\n";
	   stream_set_timeout($socket, TIMEOUT);
	   $s = bin2hex(fread($socket, 6));
	   $info = stream_get_meta_data($socket);
	   if ($info['timed_out'])
	      echo "Master server timed out.\n";
	   else
	   {
	      if ($s !== "ffffffff660a")
	      {
	         fclose($socket);
	         if ($s == "")
	            echo "Expected ff ff ff ff 66 0a (hex) but got nothing.\n";
	         else
	            echo "Expected ff ff ff ff 66 0a (hex) but got $s.\n";
	         return True;
	      }
	   }
	   return $info['timed_out'];
	}

	// Connect to master server, return timeout info.
	// The socket is passed as reference and thus returned as well.

	function master_server_timeout(&$socket, $ip)
	{
	   $port = MIN_PORT;
	   do {
	      echo "Connecting to master server \"$ip:$port\".\n";
	      $socket = fsockopen("udp://$ip", $port, $errno, $errstr, TIMEOUT);
	      if (!$socket) exit("Error $errno : $errstr \n");
	      $timeout = query_timeout($socket, "0.0.0.0:0");
	      $port = $port + 1;
	   } while ($timeout && ($port <= MAX_PORT));
	   return $timeout;
	}

	// Repeat until list isn't empty.

	do
	{

		// Try all master servers until we find one that isn't timing out.

		do
		   foreach ($master_servers as $ip)
			  if ($timeout=master_server_timeout($socket, $ip))
				 fclose($socket);
			  else
				 break;
		while ($timeout);

		// Read list with server addresses (IP:port).

		$count = 0;
		$old_a1 = 0; $old_a2 = 0; $old_a3 = 0; $old_a4 = 0; $old_a5 = 0;
		$max_timeouts = 6;
		do
		{
		   stream_set_timeout($socket, TIMEOUT);
		   $a1 = ord(fread($socket,1));
		   $info = stream_get_meta_data($socket);
		   if ($info['timed_out'])
		   {
			  $seed = "$old_a1.$old_a2.$old_a3.$old_a4:$old_a5";
			  echo "Seed: $seed\n";
			  while (query_timeout($socket, $seed));
			  stream_set_timeout($socket, TIMEOUT);
			  $a1 = ord(fread($socket,1));
			  $info = stream_get_meta_data($socket);
			  if ($info['timed_out'])
			  {
				 echo "Timeout occured.\n";
				 break;
			  }
			  $check_for_duplicate = 1;
		   }
		   else
			  $check_for_duplicate = 0;

		   // Let's always read the rest of the address (even if it starts with 0) in
		   // order to empty the master server's write buffer. This may avoid subsequent
		   // problems, but I'm paranoid here.
		   $a2 = ord(fread($socket,1));
		   $a3 = ord(fread($socket,1));
		   $a4 = ord(fread($socket,1));
		   $a5 = ord(fread($socket,1))*256 + ord(fread($socket,1));

		   if ($a1 != 0)
		   {
			  if (($check_for_duplicate==0)||($a1!=$old_a1)||($a2!=$old_a2)||
			  ($a3!=$old_a3)||($a4!=$old_a4)||($a5!=$old_a5))
			  {
				$count++;
				//echo "$count $a1.$a2.$a3.$a4:$a5\n";

				$addy = "$a1.$a2.$a3.$a4";
				$key = $addy.":".$a5;

				echo $key."\n";


			  }
			  $old_a1 = $a1; $old_a2 = $a2; $old_a3 = $a3; $old_a4 = $a4; $old_a5 = $a5;
		   }
		} while ($a1 != 0);
		fclose($socket);

	} while ($count == 0);

	echo "Retrieved $count server addresses.\n";

?>
</pre>