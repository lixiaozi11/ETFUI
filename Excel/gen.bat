set WORKSPACE=..
set LUBAN_DLL=%WORKSPACE%\Tools\Luban\Luban.dll
set CONF_ROOT=.
set CUSTOM_TEMPLATE_DIR=%CONF_ROOT%\CustomTemplate
set OUTPUT_SERVER_CODE_DIR=%WORKSPACE%\Server\Model\Generate\Config
set OUTPUT_CLIENT_CODE_DIR=%WORKSPACE%\Unity\Codes\Model\Generate\Config

set OUTPUT_SERVER_DATA_DIR=%WORKSPACE%\Config
set OUTPUT_CLIENT_DATA_DIR=%WORKSPACE%\Unity\Assets\Bundles\Config


echo================
echo === Client Config ===
dotnet %LUBAN_DLL% ^
    -t client ^
    -c cs-bin ^
    -d bin  ^
    --conf %CONF_ROOT%\luban.conf ^
    --customTemplateDir %CUSTOM_TEMPLATE_DIR% ^
    -x outputCodeDir=%OUTPUT_CLIENT_CODE_DIR% ^
    -x outputDataDir=%OUTPUT_CLIENT_DATA_DIR%

echo === Server Config ===
dotnet %LUBAN_DLL% ^
    -t server ^
    -c cs-bin ^
    -d bin  ^
    --conf %CONF_ROOT%\luban.conf ^
    --customTemplateDir %CUSTOM_TEMPLATE_DIR% ^
    -x outputCodeDir=%OUTPUT_SERVER_CODE_DIR% ^
    -x outputSaver.bin.cleanUpOutputDir=0 ^
    -x outputDataDir=%OUTPUT_SERVER_DATA_DIR%

echo === Server Config ===
dotnet %LUBAN_DLL% ^
    -t server ^
    -d bin  ^
    --conf %CONF_ROOT%\lubans.conf ^
    -x outputDataDir=%OUTPUT_SERVER_DATA_DIR%\StartConfig\Localhost

echo === Server Config ===
dotnet %LUBAN_DLL% ^
    -t server ^
    -d bin  ^
    --conf %CONF_ROOT%\lubans1.conf ^
    -x outputDataDir=%OUTPUT_SERVER_DATA_DIR%\StartConfig\Release

echo === DEL ===
del %OUTPUT_CLIENT_CODE_DIR%\Tables.cs
del %OUTPUT_SERVER_CODE_DIR%\Tables.cs

pause