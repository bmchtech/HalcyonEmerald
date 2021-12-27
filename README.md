# pokemon emerald (salted rom base)

## features
- day/night with real time clock
- battle engine upgrade, item/pokemon expansion
- tm/hm reusable and replaceable
- ingame helpers like self trading and iv checking
- improved berry growth mechanics
- various minor qol and bug fixes

## build

For initial setup:
```sh
./build.sh
```

Subsequent builds for `pkem_salt.gba`:
```sh
make -j$(nproc) DDEBUGGING=1
```
