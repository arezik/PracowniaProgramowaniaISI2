#include <stdio.h>
#include <stdlib.h>

int main()
{
///zadanie 1

/*
for(int i = 10; i <= 100 ;  i++){
    printf("%d\n", i);
}
*/

///zadanie 2

/*
int suma = 0;
int n = 0;
int i = 0;
printf("Podaj liczbê n: ");
scanf("%d", &n);
while (i <= n){
    suma += i;
    i++;
}
printf("Twoja liczba to: %d", suma);
*/

///zadanie 3


int suma = 0;
int n;
do{
    printf("Podaj liczbê: ");
    scanf("%d", &n);
    suma += 1;
} while(n != 0);
printf("Zajelo ci to %d prob", suma);


///zadanie 4

/*
int wynik = 1;
int n = 0;
printf("Podaj liczbe z ktorej chcesz obliczyc silnie: ");
scanf("%d", &n);
for(int i = 1; i <= n; i++){
    wynik = wynik * i;
}
printf("%d", wynik);
*/

///zadanie 5

/*
    int n = 10, a = 0, b = 1, k, i = 0;

    printf("Ci¹g Fibonacciego: ");

    while (i < n) {
        if (i <= 1) {
            k = i;
        } else {
            k = a + b;
            a = b;
            b = k;
        }
        printf("%d ", k);
        i++;
    }
*/

///zadanie 6

/*
int n;
printf("Podaj liczbe: ");
scanf("%d", &n);
double pierwiastek = sqrt(n);
int wynik = floor(pierwiastek);
printf("Podloga pierwiastka to %d", wynik);
*/

///zadanie 7

/*
int n;
printf("Podaj liczbe: ");
scanf("%d", &n);
double pierwiastek = sqrt(n);
int wynik = ceil(pierwiastek);
printf("Podloga pierwiastka to %d", wynik);
*/

///zadanie 8




}
