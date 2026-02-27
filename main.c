#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int liczbaCalkowita = 125;
    int liczba2 = 9999;
    int liczba3;

    char napis[25];
    printf ("Podaj \\napis (max 24 znaki): ");
    scanf("%24s", napis);
    printf ("%s", napis);
    return 0;
}
