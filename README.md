# pokemon halcyon emerald (salted rom base)

## features

- game content
- qol
- fixes

- day/night with real time clock
- battle engine upgrade, item/pokemon expansion
- tm/hm reusable and replaceable
- ingame helpers like self trading and iv/ev checking
- improved berry growth mechanics
- various minor qol and bug fixes
- moveset balance tweaks from gen 7+
- eggs hatch sooner to reduce grind
- mega stone w, as a master trigger for mega evolutions
- more mega evolutions (ported from inclement emerald)
- fixes to movement directions in overworld
- much faster text scrolling
- some hm's like fly and flash can be used as long as your party has a pokemon compatible with them
- access to legendaries gated behind events or tickets
- todo

## build

For initial setup:
```sh
./build.sh
```

Subsequent builds for `pkem_salt.gba`:
```sh
make -j$(nproc) DDEBUGGING=1
```
