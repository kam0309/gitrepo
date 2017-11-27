#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  fibonacci.py

def fib_iter(n):
    """Wylicza n-ty wyraz ciągu Fibonacciego
        F(0)= 0
        F(1)= 1
        F(n)= F(n-2) + F(n-1) """
    a, b = 0, 1
    print("wyraz", 1, a)
    print("wyraz", 2, b)
    for i in range(1, n - 1):
        # wynik = a + b
        a, b = b, a + b
        print("wyraz", i + 2, b)

    print()  
    return b


def main(args):
    n = int(input("Podaj nr wyrazu: "))
    fib_iter(n)
    print()
    print("=" * 40)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
