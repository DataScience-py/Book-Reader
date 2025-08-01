@echo off
cd build
cmake .. -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH="/mingw64"
cmake --build .