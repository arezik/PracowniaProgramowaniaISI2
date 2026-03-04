#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int liczbaCalkowita = 125;
    int liczba2 = 9999;
    int liczba3;

<<<<<<< Updated upstream
    char napis[25];
    printf ("Podaj \\napis (max 24 znaki): ");
    scanf("%24s", napis);
    printf ("%s", napis);
    return 0;
=======
    float licz1;
    float licz2;
    printf ("Podaj dwie liczby: ");
    scanf ("%f" , &licz1);
    scanf ("%f" , &licz2);
    float roz = licz1 - licz2;
    printf("roznica tych liczb to: %f", roz);

    int rokur;
    printf ("Podaj rok urodzenia: ");
    scanf ("%d", &rokur);
    printf ("%d", rokur-1);

    int licz1;
    int licz2;
    int licz3;
    printf ("Podaj 3 liczby calkowite: ");
    scanf ("%d %d %d", &licz1, &licz2, &licz3);
    float srednia = (licz1 + licz2 + licz3) / 3 ;
    printf ("Srednia to: %f", srednia);

    char a;
    char b;
    printf ("podaj 1 znak: ");
    scanf (" %c", &a);
    printf ("Podaj 2 znak: ");
    scanf (" %c", &b);
    printf (" %c, %c\n", b, a);
    return 0;


    float a;
    scanf ("%f", &a);
    printf ("%f", a*2);

    float a;
    printf("Podaj Kwotê w dolarach: ");
    scanf ("%f", &a);
    printf ("To bêdzie %f w Euro", a*0.85);


    printf ("To jest cytat: *\"Czêsto u¿ywam jêzyka C.*\"");

    printf ("\n C:\\Program Files*\\MojaAplikacja\\");

    printf ("\n Specjalne znaki: \\t (tabulacja), \\n (nowa linia), %% (procent), \\ (ukoœnik wsteczny)");

    int a, b;
    printf ("Podaj pierwsza przyprostokatna: ");
    scanf ("%d", &a);
    printf ("Podaj druga przyprostokatna: ");
    scanf ("%d", &b);
    int wynik1 = pow(a,2) + pow(b,2);
    double wynik = sqrt(wynik1);
    printf ("Przeciwprostakatna ma wielkosc %f", wynik);


    int a;
    printf ("Podaj liczbe a ja podam ci wartosc bezwzgledna: ");
    scanf ("%i", &a);
    if (a >= 0) {
            printf("%i", a);
    }
    else {
            printf("%i", -a);
}

    float a;
    printf ("Podaj liczbe a ja podam ci wartosc bezwzgledna: ");
    scanf ("%f", &a);
    if (a >= 0) {
            printf("%f", a);
    }
    else {
            printf("%f", -a);
}
 */


<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
}
