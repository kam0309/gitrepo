#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nwd_v1(a, b):
    """Wersja klasyczna"""
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a
    
    
def nwd_v2(a, b):
    """Wersja optymalna"""
    while a > 0:
        a = a % b
        b = b - a
    return b
            

def main(args):
    a = int(input('podaj licze naturalna: '))
    b = int(input('podaj druga liczbe naturalna: '))
    assert nwd_v2(4, 16) == 4
    assert nwd_v2(5, 10) == 5
    assert nwd_v2(7, 49) == 7
    print ("nwd({:d}, {:d}) = {:d}".format(a, b, nwd_v2(a, b)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
