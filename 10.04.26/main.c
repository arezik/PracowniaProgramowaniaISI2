#include <stdio.h>
#include <stdlib.h>

///zadanie 1

void findMaxValue(int tab[], int size) {
    int max = tab[0];
    for(int i = 1; i < size; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    } printf("%d\n", max);
}

///zadanie 2

double avarage(int tab[], int size)  {
    double wynik = 0.0;
    for(int i = 0; i < size; i++){
        wynik += tab[i];
}   wynik = wynik / size;
    return wynik;
}

///zadanie 3

int sumSquares(int tab[], int size) {
    int wynik = 0;
    for(int i = 0; i < size; i++){
        wynik += tab[i] * tab[i];
}   return wynik;
}

///zadanie 4

void copyArr(int n, int tab1[], int tab2[]) {
    for(int i = 0; i < n; i++){
        tab2[i] = tab1[i];
        printf("%d, ", tab2[i]);
}
}
///zadanie 5

void revCopy(int n, int tab1[], int tab2[]) {
    printf("\n");
    for(int i = 0; i < n; i++){
        tab2[n-i-1] = tab1[i];
}
    for(int i = 0; i < n; i++){
        printf("%d, ", tab2[i]);
    }
}
///main

int main()
{
    int test[] = {1, 2, -12, 9, 1};
    int rozmiar = sizeof(test) / sizeof(test[0]);
    //zad1
    findMaxValue(test, rozmiar);
    //zad2
    printf("%fl\n", avarage(test, rozmiar));
    //zad3
    printf("%d\n", sumSquares(test, rozmiar));

    //zad4
    int test1[5] = {1, 20, 31, 45, 32};
    int test2[5] = {};
    int test3[5] = {};
    copyArr(5, test1, test2);
    //zad5
    revCopy(5, test1, test3);
    return 0;
}
