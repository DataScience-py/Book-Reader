@echo off

if exist build (
    rmdir /s /q build
)
mkdir build
cd build 
cmake .. -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH="/mingw64"
cmake --build .