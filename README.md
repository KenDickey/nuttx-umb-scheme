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
CONFIG_ARCH_SETJMP_H=y
CONFIG_POSIX_SPAWN_DEFAULT_STACKSIZE=8192
```
Note that `make menuconfig` can select NuttX LibM to set the first 2 flags above.

For the PinePhone, other settings are as in:
  https://github.com/lupyuen/lvglterm/blob/main/README.md

Be sure interpreters/Kconfig menu "Interpreters" includes source path to umb-scheme.
Copy umb-scheme/prelude.scheme into apps/bin ? [WIP]

Expected behavior:
```scheme
(+ 1/2 1/3 1/6)
==> 1
((lambda (n) (* n n))(sqrt -4))
==> -4
(define (ifact n accum) (if (< n 2) accum (ifact (- n 1)(* n accum))))
(define (fact n)(ifact n 1))
(fact 5)
==> 120
(fact (fact 5))
==> 6689502913449127057588118054090372586752746333138029810295671352301633557244962989366874165271984981308157637893214090552534408589408121859898481114389650005964960521256960000000000000000000000000000
(/ (fact 500) (fact 498))
==> 249500
(* 500 499)
==> 249500
```
