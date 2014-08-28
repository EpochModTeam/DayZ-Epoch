@echo off
:: Based off of Server Launch Script by r4z0r49
:: Script Modified and fixed by Sykotix - http://dayz.sykotix.com
:: Day of the week Added By Raziel23x - http://adkgamers.com
::
:: Usage: dayzsrv-log-rotater.bat servername
:: Example 1 - Will update using default profile: dayzsrv-log-rotater.bat 
:: Example 2 - Will update using profile for US6: dayzsrv-log-rotater.bat US6

:::::::::::::: CONFIG ::::::::::::::::::

:: Set your Arma2AO Base installation directory. LEAVE OFF THE ENDING \
set arma2srvpath=C:\Program Files (x86)\Steam\SteamApps\common\Arma 2 Operation Arrowhead

:: Set your Default server profile name. This is the name of the directory that stores your server.cfg
:: This will be used in the case that you don't launch this script without the server param.
:: Example: cfgdayz, US6, Chicago13, ect
:: DEFAULTPROFILE
set srvname=instance_11_chernarus

:: Delete Original log files after they have been rotated? This keeps your logs more organized and saves space.
:: This will not work unless the server is stopped first. This option works best set to 1 when using FireDaemon's Pre/Post Service tab
set deloriglogs=1

::::::::::: ADVANCED CONFIG ::::::::::::
:: Don't touch anything below this point unless you know what your doing.

:: Setting Server Profile to Use
IF "%1"=="" (
set servername=%srvname%
) else (
set servername=%1
)

TITLE  DayZ %servername% Server Log Rotater

:: Set Debug Mode
set debug=0
:: Set Debug Timeout in seconds
set dbsecs=10

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:::::::::::::::::::::::::::  STOP EDITING ::::::::::::::::::::::::::::::::::::::
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

:: Display Debug output
if %debug% == 1 (
echo Server Name = %servername%
echo ArmaII Server Path = "%arma2srvpath%"
timeout %dbsecs%
)

:: Set Time and Date
SET HOUR=%time:~0,2%
SET dtStamp9=%date:~-4%%date:~4,2%%date:~7,2%_0%time:~1,1%%time:~3,2%_%time:~6,2%
SET dtStamp24=%date:~-4%%date:~4,2%%date:~7,2%_%time:~0,2%%time:~3,2%_%time:~6,2%
::Make Date Stamp
if "%HOUR:~0,1%" == " " (SET dtStamp=%dtStamp9%) else (SET dtStamp=%dtStamp24%)
ECHO Todays Date and time (%date%)(%time%) / %dtStamp%
if %debug% == 1 (
timeout %dbsecs%
)
:: Set Day of the Week --Raziel23x
SETLOCAL
FOR /F "skip=1" %%D IN ('wmic path win32_localtime get dayofweek') DO (

    IF %%D==1 set weekday=Monday
    IF %%D==2 set weekday=Tuesday
    IF %%D==3 set weekday=Wednesday
    IF %%D==4 set weekday=Thursday
    IF %%D==5 set weekday=Friday
    IF %%D==6 set weekday=Saturday
    IF %%D==7 set weekday=Sunday
)

echo (%weekday%) (%date%) (%time%) Starting Log Rotation.

:: Make the Rotated Log Directorys
if exist "%arma2srvpath%\%servername%\RotatedLogs" goto maketsdir
mkdir "%arma2srvpath%\%servername%\RotatedLogs"
:maketsdir
if exist "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%" goto makebedir
mkdir "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%"
:makebedir
if exist "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye" goto rotatelogs
mkdir "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye"

:rotatelogs
:: Starting Log Rotation. If there are any other logs, just follow the format below, and make sure to NOT touch any of the varibles.
copy "%arma2srvpath%\%servername%\arma2oaserver.RPT" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\arma2oaserver.RPT"
copy "%arma2srvpath%\%servername%\arma2oaserver.mdmp" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\arma2oaserver.mdmp"
copy "%arma2srvpath%\%servername%\arma2oaserver.bidmp" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\arma2oaserver.bidmp"
copy "%arma2srvpath%\%servername%\server_log.txt" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\server_log.txt"
copy "%arma2srvpath%\%servername%\HiveExt.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\HiveExt.log"
copy "%arma2srvpath%\%servername%\BattlEye\scripts.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\scripts.log"
copy "%arma2srvpath%\%servername%\BattlEye\createvehicle.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\createvehicle.log"
copy "%arma2srvpath%\%servername%\BattlEye\mpeventhandler.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\mpeventhandler.log"
copy "%arma2srvpath%\%servername%\BattlEye\publicvariable.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\publicvariable.log"
copy "%arma2srvpath%\%servername%\BattlEye\publicvariableval.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\publicvariableval.log"
copy "%arma2srvpath%\%servername%\BattlEye\remoteexec.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\remoteexec.log"
copy "%arma2srvpath%\%servername%\BattlEye\setdamage.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\setdamage.log"
copy "%arma2srvpath%\%servername%\BattlEye\setpos.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\setpos.log"
copy "%arma2srvpath%\%servername%\BattlEye\setvariable.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\setvariable.log"
copy "%arma2srvpath%\%servername%\BattlEye\addmagazinecargo.log" "%arma2srvpath%\%servername%\RotatedLogs\%weekday%\%dtStamp%\BattlEye\addmagazinecargo.log"

echo (%weekday%) (%date%) (%time%)) Logs are backed up now...
echo (%weekday%) (%date%) (%time%) Removing original log files.
del /Q /F "%arma2srvpath%\%servername%\arma2oaserver.RPT"
del /Q /F "%arma2srvpath%\%servername%\arma2oaserver.mdmp"
del /Q /F "%arma2srvpath%\%servername%\arma2oaserver.bidmp"
del /Q /F "%arma2srvpath%\%servername%\server_console.log"
del /Q /F "%arma2srvpath%\%servername%\runtime.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\scripts.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\createvehicle.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\mpeventhandler.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\publicvariable.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\publicvariableval.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\remoteexec.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\setdamage.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\setpos.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\setvariable.log"
del /Q /F "%arma2srvpath%\%servername%\BattlEye\addmagazinecargo.log"

if %debug% == 1 (
timeout %dbsecs%
)

:: We're done here.
exit