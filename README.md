# pokemon emerald (salted version)

## features
- Day/Night
- ...
## build

For initial setup:
```sh
./build.sh
```

Subsequent builds for `pkem_salt.gba`:
```sh
make -j$(nproc) DDEBUGGING=1
```
