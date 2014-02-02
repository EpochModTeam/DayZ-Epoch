== Basic Install Guide ==

1. First install/update your Visual C++ x86 Redistributable Packages for Visual Studio 2013 from http://www.microsoft.com/en-us/download/details.aspx?id=40784 The file is called "vcredist_x86.exe".

2. Download both client and server files and extract to the root "Arma 2 Operation Arrowhead" folder. Example: "C:\Program Files (x86)\Steam\steamapps\common\Arma 2 Operation Arrowhead". 
Important Note: On some Windows systems you may need to "UnBlock" the dll files. Right-click the file, Properties and click "Unblock".

3. Install Mysql server and create a new mysql database called "dayz_epoch". Next import the epoch.sql file found in the SQL folder.

4. Open HiveExt.ini and change your mysql connection information.

5. Launch the server with -mod=@DayZ_Epoch;@DayZ_Epoch_Server; use the *.bat files found in Config=Examples folder for an example.

== Basic Upgrading Guide ==

1. First install/update your Visual C++ x86 Redistributable Packages for Visual Studio 2013 from http://www.microsoft.com/en-us/download/details.aspx?id=40784 The file is called "vcredist_x86.exe".

2. Download both client and server files and extract to the root "Arma 2 Operation Arrowhead" folder. Example: "C:\Program Files (x86)\Steam\steamapps\common\Arma 2 Operation Arrowhead". 
Important Note: On some Windows systems you may need to "UnBlock" the dll files. Right-click the file, Properties and click "Unblock".

3. Connect to your mysql server using naicat or phpmyadmin and import the epoch.sql file found in the SQL folder. This will drop and re-add the traders tables and will leave everything else intact.

4. Inside the "Keys" folder on your server remove dayz_vb.bikey and dayz.bikey keys. As of 1.0.4 our bikey is called dayz_epoch104.bikey and we will use a new one for each release.