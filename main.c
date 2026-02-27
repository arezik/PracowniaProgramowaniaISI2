#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{ /*
    int liczbaCalkowita;
    printf ("Podaj liczbe calkowita: \n");
    scanf ("%d", &liczbaCalkowita);
    printf ("%d", liczbaCalkowita);

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
       */

    char znak;
    char znakdwa;
    printf ("podaj 1 znak: ");
    scanf ("%s", &znak);
    printf ("Podaj 2 znak: ");
    scanf ("%s", &znakdwa);
    printf ("%s, ", &znakdwa);
    printf ("%s", &znak);
}
