@echo off

:: ת��Ŀ¼
E:
cd E:/GitHub/Phoenix3D/Bin/build_android

:: so����
call _build_so.bat

::apk���
E:
cd E:/GitHub/Phoenix3D/Bin/build_android
call _build_ant.bat

pause