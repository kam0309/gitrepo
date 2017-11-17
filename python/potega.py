#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py

def potega_it(x,n):

    i =1 
    wynik =1
    while i <= n:
        wynik = wynik *x
        i = i + i
       
    return wynik


def main(args):
    x = float(input("Podaj podstawe potęgi: "))
    n = int(input("Podaj wykładnik potęgi: "))
    assert potega_it(2,2) == 4
    assert potega_it(3,2) == 9
    assert potega_it(4,2) == 16
    assert potega_it(5,2) == 25
    print("Wynik: ")
    print(potega_it(x, n))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
