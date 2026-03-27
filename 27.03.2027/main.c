/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(int*));
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
///2.1
int sum(int a, int b){
    int suma = a + b;
    return suma;
}
///2.2
int sumVals(int *a, int *b){
    int wsksuma = *a + *b;
    return wsksuma;
}
///2.3
void addPtr(int *x, int *y, int *z){
*z = *x + *y;
}
///zadanie 3
void copyInt(int x, int *w){
*w = x;
}
///zadanie 4
double findMax(const double num1, const double *num2){
if (num1 > *num2){
    return num1;
}else{
    return *num2;
    }
}
///zadanie 5
int* initInts(){
    int *tablica = (int*)malloc(3*sizeof(int));
    tablica[0] = 5;
    tablica[1] = -12;
    tablica[2] = 33;
    return &tablica[1];

}

///zadanie sumToPtr


int main()
{
    /*
    ///2.1

    printf("%d", sum(2, 4));
    ///2.2

    int a1= 2;
    int a2 = 2;
    int wynik = sumVals(&a1, &a2);
    printf("\n %d", wynik);

    ///2.3
    int b1 = 15;
    int b2 = 20;
    int b3 = 0;
    addPtr(&b1, &b2, &b3);
    printf("\n%d", b3);
    return 0;


    ///zadanie 3
    int A = 5;
    int B = 0;
    copyInt(A, &B);
    printf("%d", B);


    ///zadanie 4
    double X = 5.5;
    double Y = 2.2;
    double wynik = findMax(X, &Y);
    printf("%f", wynik);
      */

    ///zadanie 5
    int *tablica1 = initInts();
    printf("%d", *tablica1);
}
