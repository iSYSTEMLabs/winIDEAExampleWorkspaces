del build
mkdir build
cd build
cmake -S .. -B . -GNinja
ninja -v
cmd /k