# Tools Collection for Mega Drive development toolchains

## Included Tools

### Sources

- [checkhash](https://github.com/sonicretro/s2disasm/tree/master/build_source) (SonicRetro)
- [fixheader](https://github.com/sonicretro/s2disasm/tree/master/build_source) (SonicRetro)
- [Flips](git clone https://github.com/Alcaro/Flips)
- [Furrtek's ROM padder](http://furrtek.free.fr/index.php?p=crea&a=neogeo&ng=9)
- [srecpatch](https://github.com/suppertails66/yuitools/tree/master/new_tools/yui) (yuitools)
- [VASM](https://github.com/Leffmann/vasm)

--- 

## VASM

### build
```
git clone https://github.com/Leffmann/vasm.git
cd vasm
make CPU=m68k SYNTAX=mot
chmod +x vasmm68k_mot
```

### usage

#### create s-record file
```
./vasmm68k_mot [script file] -quiet -chklabels -nocase -rangewarnings -Dvasm=1 -L Listing.txt -DBuildGEN=1 -Fbin -Fsrec -o srecfile.txt
```

#### create binary
```
./vasmm68k_mot [script file] -quiet -chklabels -nocase -rangewarnings -Dvasm=1 -L Listing.txt -DBuildGEN=1 -Fbin -o [output file]
```
--- 

## SRECPATCH

### build
```
git clone https://github.com/suppertails66/yuitools.git
cd yuitools
cd yui
cd new_tools
make
chmod +x srecpatch
```

### usage
```
./srecpatch [source binary] [output file]<srecfile.txt

```
---

## FIXHEADER

### build

#### download source with curl
```
curl -LJO https://raw.githubusercontent.com/sonicretro/s2disasm/master/build_source/fixheader.c
```

#### download source with wget
```
wget --no-check-certificate --content-disposition https://raw.githubusercontent.com/sonicretro/s2disasm/master/build_source/fixheader.c
```

#### compile with cc
```
cc -std=c99 -O2 -s -fno-ident -flto -o fixheader fixheader.c &> /dev/null
chmod +x fixheader
```

### usage
```
./fixheader [MegaDrive ROM file]
```

---

## FLIPS

### compile
```
clang++ *.c *.cpp -O3 -o flips 
```

### usage
```
./flips --create [unmodified file][modified file][bps filepath]
```