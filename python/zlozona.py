#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  zlozona.py


def main(args):
    n = int(input("Podaj liczbe: "))
    i = 2
    while True:
        if i * i <= n:
            if n % i == 0:
                print("Liczba zlozona")
                break
            else:
                i += 1
        else:
            print("Liczba pierwsza")
            break

    return 0

if _name_ == '_main_':
    import sys
    sys.exit(main(sys.argv))
