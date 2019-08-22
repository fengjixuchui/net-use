@echo off
rem Public domain
rem http://unlicense.org/
rem Created by Grigore Stefan <g_stefan@yahoo.com>

rem --- make

echo ^> %ACTION% net-use ^<

goto Make
:ErrorMake
echo Error: %ACTION% 
goto :eof
:Make

xyo-cc --mode=%ACTION% --exe net-use --source-is-separate --use-project=libxyo-core.static --use-lib=netapi32
IF ERRORLEVEL 1 goto ErrorMake
