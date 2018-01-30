#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  konwersje.py

def konwersja1(liczba10, podstawa):
    """
     Funkcja zamienia liczbę dzisiętna na sysytem o podanej podstawie
    """
    liczba = [] # lista reszt
    while liczba10 != 0:
        reszta = liczba10 % podstawa # obliczanie reszt z dzielenia
        if reszta > 9:
            reszta = chr(reszta + 55)
        liczba.append(str(reszta))
        liczba10 = int(liczba10 / podstawa)
        
    liczba.reverse() #odwrócenie kolejności elementów 
    return "".join(liczba) # zlączenie elementów listy w jeden ciąg teks 

def dec2other():
    """
    Funkcja pobiera liczbę i podstawę od użytkownika 
    """
    liczba = int(input("Podaj liczbę: "))
    podstawa = int(input("Podaj podstawę: "))
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę: "))
    print("Wynik konwersji: {}(10) = {}({})".format(
        liczba, konwersja1(liczba, podstawa), podstawa))
    
def konwersja2(liczba,podstawa):
    """
    Funkcja konweryje podana liczbe w systemie  o podanej podstawie na system dziesietny
    """
    liczba10 = 0  #wartość dziesiętna liczby
    potega = len(liczba) - 1
    for cyfra in liczba:
        if not cyfra.isdigit():
            liczba10 += (ord(cyfra.upper()) - 55) * (podstawa ** potega)
        else:
            liczba10 += int(cyfra) * (podstawa ** potega)
        potega -= 1
    return liczba10
def other2dec():
    """
    Funkcja pobiera podstawę i liczbę od użytkownika
    """
    liczba = int(input("Podaj licdzbę: "))
    podstawa = int(input("Podaj podstawę: "))
    for i in liczba:
        if i.isdigit():
            cyfra = int(i)
        else:
            cyfra = ord(i.upper()) - 55
        if cyfra > podstawa - 1:
            print("Podałeś niedopuszczalną liczbę!")
            return
        print("Wynik konwersji: {}[10]".format(konwersja2(liczba, podstawa)))

def main(args):
    print("Zamiana liczby dziesietnej na liczbę o podanej podstawie"
          "<2;16> lub odwrotnie.")
    dec2other()
    other2dec()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
