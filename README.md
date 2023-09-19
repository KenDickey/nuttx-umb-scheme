# nuttx-umb-scheme

Original code from https://www.cs.umb.edu/~wrc/scheme/

***>>> Work In Progress <<<***

cd to apps/interpreters
```
apps/interpreters>>  git clone https://github.com/KenDickey/nuttx-umb-scheme umb-scheme
```
nuttx/.config needs
```
CONFIG_LIBM=y
CONFIG_ARCH_FLOAT_H=y
```
Be sure interpreters/Kconfig menu "Interpreters" includes source path to umb-scheme.
Copy umb-scheme/prelude.scheme into apps/bin.
