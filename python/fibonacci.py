#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  fibonacci.py


def fib_iter(n):
    """Wylicza n-ty wyraz ciągu Fibonacciego
        F(0)= 0
        F(1)= 1
        F(n)= F(n-2) + F(n-1) """
    if n == 0:
        return 0
    elif n == 1:
        return 1
    a, b = (0, 1)
    print(a)
    for i in range(1, n):
        a, b = b, a + b
        print(a, " ", b, " ", b / a)
    return b


def fib_iter2(n):
    a, b = (1, 1)
    for i in range(2, n):
        a, b = b, a + b
        print("F({:4d}) / F({:4d}) = {:.5f}".format(b, a, b / a))
    return b


def main(args):
    # n = int(input("Podaj nr wyrazu: "))
    # assert fib_iter(0) == 1
    # assert fib_iter(1) == 1
    # assert fib_iter(2) == 1
    # assert fib_iter(5) == 5
    print("Wyraz {:d} = {:d}". format(20, fib_iter(20)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
