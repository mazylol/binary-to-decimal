# Binary To Decimal (`b2d`)
*companion to [decimal-to-binary](https://github.com/mazylol/decimal-to-binary)*

It is very simple, input binary as the first argument, get a decimal

`b2d 1011011101 -> 733`

# Install
1. Clone the repo and move into the directory
2. `meson setup buildDir`
3. `cd buildDir`
4. `sudo ninja install`

or

1. Clone the repo and move into the directory
2. `(gcc/clang) main.c -o b2d`
3. `sudo cp b2d /usr/local/bin`
