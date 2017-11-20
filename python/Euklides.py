#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nww_v1(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a


def main(args):
    a = int(input('podaj licze naturalna: '))
    b = int(input('podaj druga liczbe naturalna: '))
    assert nww_v1(4, 16) == 4
    assert nww_v1(5, 10) == 5
    assert nww_v1(7, 49) == 7
    print ("nww({:d}, {:d}) = {:d}".format(a, b, nww_v1(a, b)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
