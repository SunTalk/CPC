@echo off

pushd %1

cls
echo COMPILING...
g++ -std=c++11 %2.cpp -o %2.exe -DDBG

echo FINISH
if %ERRORLEVEL% EQU 0 (
	%2.exe
)

popd