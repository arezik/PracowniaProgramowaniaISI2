#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{/*
    double x1 = 0.1 + 0.2;
    double x2 = 0.3;
    double epsilon = 1e-9;
    if (fabs(x1 - x2) < epsilon) {
        printf("Prawid³owy wynik \n");
    }else if (fabs(x1-x2 == epsilon)) {
        printf("roznica jest rowna dokladnie 0.000000000000001 \n");
    }else{printf("Nieprawidlowy wynik");
    }
//zadanie 1 Operatory Arytmetyczne

int a =23;
int b =6;
int c =5;
printf("%i", (a+b)%c);


//zadanie 2

double a = 10, b = 4;
printf("%f", pow(a,2)-pow(b,2));
    return 0;

//zadanie 3


int a = 10;
int b = 7;
int c = 2;
printf("%i", (a-b)*c);

//zadanie 4

double a, b, c;
printf ("Podaj 3 liczby (format 'a, b, c'): ");
scanf("%lf, %lf, %lf", &a, &b, &c);
printf("Wynik sredniej geometrycznej to: %lf", pow(a*b*c, 1.0/3.0));

//zadanie 5

double a, b;
printf ("Podaj 2 liczby ca³kowite (format a, b): ");
scanf ("%lf, %lf", &a, &b);
printf ("n\Kwadrat sumy tych liczb to: %lf", pow((a+b), 2.0));

//zadanie 6

double a, b, c;
printf ("Podaj 3 liczby calkowite (Format'a, b, c')");
scanf ("%lf, %lf, %lf", &a, &b, &c);
printf ("%lf", pow(a,2.0)+ pow(b,2.0)+ pow(c,2.0));

//zadanie 7
int liczba1, liczba2, wynik;
printf ("Podaj 1 liczbe: ");
scanf("%d", &liczba1);

printf("Podaj 2 liczbe: ");
scanf("%d", &liczba2);

wynik = liczba2/liczba1;
printf("Liczba %d miesci sie w liczbie %d tylerazy: %d", liczba1, liczba2, wynik);

//zadanie 8
int a, b, roznica, wynik;
printf("Podaj 1 liczbe: ");
scanf("%d", &a);
printf("Podaj 2 liczbe: ");
scanf("%d", &b);
roznica = a - b;
wynik = roznica * roznica;
printf("Kwadrat roznicy tych liczb to: %d\n", wynik);

//zadanie 9
int a, b;
float wynik;

printf("Podaj 1 liczbe: ");
scanf("%d", &a);
printf("Podaj 2 liczbe: ");
scanf("%d", &b);

wynik = (float)(a + b) / (a - b);
printf("Iloraz sumy przez roznice wynosi: %2f", wynik);

//zadanie 10
int liczba;
int suma;
printf("Podaj poczatkowa liczbe calkowita: ");
scanf("%d", &liczba);
suma = liczba + (liczba + 1) + (liczba + 2);
printf("Twoja suma liczb to %d", suma);

//zadanie 11
float a, b, c, srednia;
printf("Podaj pierwsza liczbe: ");
scanf("%f", &a);
printf("Podaj druga liczbe: ");
scanf("%f", &b);
printf("Podaj trzecia liczbe: ");
scanf("%f", &c);
srednia = (a + b + c) / 3.0;
printf("Srednia arytmetyczna podanych liczb to: %f\n", srednia);

//zadanie 12
float a, b, c;
float wynik;
printf("Podaj liczbe a: ");
scanf("%f", &a);
printf("Podaj liczbe b: ");
scanf("%f", &b);
printf("Podaj liczbe c: ");
scanf("%f", &c);

if (a == 0 || b == 0 || c == 0) {
    printf("Blad! mianownik nie moze byc 0");
} else {
    a = 1.0/a;
    b = 1.0/b;
    c = 1.0/c;
    printf("%f", 1.0/(a + b + c));
}
*/

//zadanie 14

double a, b, kat_stopnie, kat_radiany, pole;
double PI = 3.141592653589793;
printf("Podaj dlugos pierwsego boku: ");
scanf("%lf", &a);
printf("Podaj dlugosc drugiego boku: ");
scanf("%lf", &b);
printf("Podaj kat miedzy nimi w stopniach: ");
scanf("%lf", &kat_stopnie);

kat_radiany = kat_stopnie * PI / 180.0;

pole = 0.5 * a * b * kat_radiany;

printf("Przyblizone pole trojkata wynosi: %lf\n", pole);
/*

// Instrukcje warunkowe, operator warunkowy
//zadanie 1.

int a;
printf("Podaj liczbe calkowita:");
scanf ("%i", &a);
printf ("\n");
if (a > 0){
    printf("liczba jest wieksza od 0");
}else if (a < 0){
    printf("Liczba jest mniejsza od 0");
}else if (a == 0) {
    printf("Liczba jest rowna 0");
}

//zadanie 2
int a, b;
printf("Podaj 2 liczby calkowite (Format 'a, b'): ");
scanf ("%i, %i", &a, &b);
if (a > b) {
    printf("\n %i jest wieksze od %i", a, b);
} else if (b > a) {
    printf("\n %i jest wieksze od %i", b, a);
} else if (a == b) {
    printf ("\n Obie liczby s¹ sobie rowne");
}

*/




}
