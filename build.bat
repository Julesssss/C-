REM Disable printing
@echo off

REM Create binary dirs
IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int

REM Change dir 
pushd bin-int

REM Compile program
cl ..\main.cpp

REM Exit directory 
popd

REM Move binary file to dir
move bin-int\main.exe bin\main.exe