#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sumuj2py
#  


def main(args):
    suma =0 
    ile =0
    while True:
        liczba = int(input('Podaj liczbę: '))
        suma = suma + liczba
        ile = ile +1
        if suma > 100:
            break 
    print('Wprowadzano', ile, 'liczb.')
    print('Suma:', suma )
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
