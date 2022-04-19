# halcyon emerald

Pokemon **Halcyon Emerald**, built on my "Salted Rom Base"

This project is essentially a large upgrade to the Pokemon Emerald base game. Its intention is to provide a souped up Emerald game ROM with an upgraded engine, that can then be modified to add new content/story while keeping all the new features.

## features

+ game content
    + battle engine upgrade, item/pokemon expansion
    + day/night with real time clock
    + access to legendaries gated behind events or tickets
    + mega stone w, as a master trigger for mega evolutions
    + more mega evolutions (ported from inclement emerald)
    + infinite move tutors
    + ingame helpers like self trading and iv/ev checking
    + moveset balance tweaks from gen 7+
+ qol
    + much faster text scrolling
    + hm can be used as long as a party pokemon can learn it
    + eggs hatch sooner to reduce grind
    + tm/hm reusable and replaceable
    + various minor qol and bug fixes
+ fixes
    + fixes to movement directions in overworld
    + improved berry growth mechanics

## build

### standard build

for initial setup:
```sh
./build.sh
```
this will build `agbcc` and set up the build environment to work with make.

subsequent builds for `PokeHalcyonEmerald_va.b.c`:
```sh
make -j$(nproc)
```

to enable debug logging:  `DDEBUGGING=1`

### containerized build

```sh
podman run --rm -it -v $(pwd):/source docker.io/xdrie/dkarm_base:v0.6 -l -c '\
    apt install -y libpng-dev \
    && ./build.sh \
    && make -j$(nproc)'
```
