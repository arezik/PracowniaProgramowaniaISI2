#include <stdio.h>
#include <stdlib.h>

int main() {

    /// Zadanie 1
    int i;
    printf("Liczby od 1 do 100\n");
    for(i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    /*
    /// Zadanie 2
    int n2, i2 = 1, suma2 = 0;
    printf("Podaj liczbe n: ");
    scanf("%d", &n2);

    while(i2 <= n2) {
        suma2 = suma2 + i2;
        i2++;
    }
    printf("Suma liczb od 1 do %d wynosi: %d\n", n2, suma2);
    */

    /*
    /// Zadanie 3
    int liczba3;
    int suma_dodatnich = 0;
    int suma_ujemnych = 0;

    printf("Wpisuj liczby. Zero konczy.\n");
    do {
        scanf("%d", &liczba3);
        if (liczba3 > 0) {
            suma_dodatnich = suma_dodatnich + liczba3;
        }
        if (liczba3 < 0) {
            suma_ujemnych = suma_ujemnych + liczba3;
        }
    } while (liczba3 != 0);

    printf("Suma dodatnich: %d Suma ujemnych: %d", suma_dodatnich, suma_ujemnych);
    */

    /*
    // Zadanie 4
    int n4, i4;
    int silnia = 1;

    printf("Podaj liczbe nieujemna do silni: ");
    scanf("%d", &n4);

    for(i4 = 1; i4 <= n4; i4++) {
        silnia = silnia * i4;
    }
    printf("%d",silnia);
    */

    /*
    /// Zadanie 5
    int f1 = 0, f2 = 1, f_next, count = 0;

    while(count < 10) {
        printf("%d ", f1);
        f_next = f1 + f2;
        f1 = f2;
        f2 = f_next;
        count++;
    }
    */

    /*
    // Zadanie 6
    int n6, pierwiastek = 0;
    printf("Podaj liczbe n: ");
    scanf("%d", &n6);

    while((pierwiastek * pierwiastek) <= n6) {
        pierwiastek++;
    }
    printf("%d", pierwiastek - 1);
    */

    /*
    // Zadanie 7
    int n7, sufit = 0;
    printf("Podaj liczbe n: ");
    scanf("%d", &n7);

    while((sufit * sufit) < n7) {
        sufit++;
    }
    printf("Sufit pierwiastka: %d\n", sufit);
    */

    /*
    // Zadanie 8
    int a8[10];
    int i8, wynik8 = 0;

    printf("Zadanie 8: Podaj 10 liczb dodatnich:\n");
    for(i8 = 0; i8 < 10; i8++) {
        scanf("%d", &a8[i8]);
    }

    for(i8 = 1; i8 < 9; i8++) {
        if (a8[i8] < (a8[i8-1] + a8[i8+1]) / 2.0) {
            wynik8++;
        }
    }
    printf("Liczba elementow spelniajacych warunek: %d\n", wynik8);
    */

    /*
    /// Zadanie 9
    int n9, i9, wynik9 = 0;
    int a9[100];

    printf("Zadanie 9: Podaj ilosc elementow n: ");
    scanf("%d", &n9);

    printf("Podaj te liczby:\n");
    for(i9 = 0; i9 < n9; i9++) {
        scanf("%d", &a9[i9]);
    }

    for(i9 = 1; i9 < n9 - 1; i9++) {
        if (a9[i9] < (a9[i9-1] + a9[i9+1]) / 2.0) {
            wynik9++;
        }
    }
    printf("%d", wynik9);
    */

    /*
// Zadanie 10
    int n10, i10;
    printf("Podaj liczbe n: ");
    scanf("%d", &n10);

    printf("Dzielniki: ");
    for(i10 = 2; i10 <= n10 / 2; i10++) {
        if (n10 % i10 == 0) {
            printf("%d ", i10);
        }
    }
    printf("\n");
    */

    /*
/// Zadanie 11
    int n11, cyfra, suma_cyfr = 0;
    printf("Podaj liczbe: ");
    scanf("%d", &n11);

    if(n11 < 0) n11 = -n11;

    printf("Cyfry od konca: ");
    while(n11 > 0) {
        cyfra = n11 % 10;
        printf("%d ", cyfra);
        suma_cyfr = suma_cyfr + cyfra;
        n11 = n11 / 10;
    }
    printf("\n%d", suma_cyfr);
    */

    /*
    // Zadanie 12
    int a12, b12;
    printf("Podaj dwie liczby naturalne (odejmowanie): ");
    scanf("%d %d", &a12, &b12);

    while(a12 != b12) {
        if(a12 > b12) {
            a12 = a12 - b12;
        } else {
            b12 = b12 - a12;
        }
    }
    printf("%d", a12);
    */

    /*
// Zadanie 13
    int a13, b13, reszta13;
    printf("Podaj dwie liczby naturalne (dzielenie): ");
    scanf("%d %d", &a13, &b13);

    while(b13 != 0) {
        reszta13 = a13 % b13;
        a13 = b13;
        b13 = reszta13;
    }
    printf("%d", a13);
    */

    /*
    // Zadanie 14
    int n14, i14;
    int czy_pierwsza = 1;

    printf("Podaj liczbe, zeby sprawdzic czy jest pierwsza: ");
    scanf("%d", &n14);

    if (n14 <= 1) {
        czy_pierwsza = 0;
    } else {
        for(i14 = 2; (i14 * i14) <= n14; i14++) {
            if (n14 % i14 == 0) {
                czy_pierwsza = 0;
                break;
            }
        }
    }

    if (czy_pierwsza == 1) {
        printf("Liczba jest pierwsza\n");
    } else {
        printf("Liczba nie jest pierwsza\n");
    }
    */

    /*
// Zadanie 15
    int kwota;
    int monety5, monety2, monety1;

    printf("Podaj kwote reszty do wydania: ");
    scanf("%d", &kwota);

    monety5 = kwota / 5;
    kwota = kwota % 5;

    monety2 = kwota / 2;
    kwota = kwota % 2;

    monety1 = kwota / 1;

    printf("Wydano monet:\n");
    printf("5zl: %d sztuk\n", monety5);
    printf("2zl: %d sztuk\n", monety2);
    printf("1zl: %d sztuk\n", monety1);
    */

    return 0;
}
