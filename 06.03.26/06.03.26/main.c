#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
*/
int a = 10;
int b = 20;

a = a^b;
b = a^b;
a = a^b;
printf("a = %d, b = %d \n", a,b);
//zadanie2
int liczba2 = 7;
if (liczba2 & 1) {
    printf("Liczba jest nieparzysta.\n");
} else {
    printf("Liczba jest parzysta.\n");
}

//zadanie 3

int liczba = 13;
int pozycja = 2;
int wartosc = (liczba >> pozycja) & 1;
printf("Bit to: %d\n",wartosc);

//zadanie 5
int liczbax = 5;
int wynik = ~liczbax;
printf("Odwrocenie bitow daje wynik: %d\n", wynik);

//zadanie 6

int liczbaxx = 2;
int pozycjeWLewo = 2;
int wynikxx = liczbaxx << pozycjeWLewo;
printf("Przesuniecie to: %d\n", wynikxx);

//zadanie 7

int liczba7 = 10;
int pozycjeWPrawo = 2;
int wynik7 = liczba7 >> pozycjeWPrawo;
printf("Przesuniecie liczby w prawo to: %d\n",wynik7);

//zadanie 8
int x = 6;
int y = 3;
int wynikXor = x ^ y;
printf("Wynik XOR to: %d\n",wynikXor);


}
