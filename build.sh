set -e

git submodule update --init --recursive
cd agbcc
./build.sh
./install.sh ..
cd ..
make -j$(nproc)
