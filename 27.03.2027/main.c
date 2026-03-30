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
int *initInts(){
    int *tablica = (int*)malloc(3*sizeof(int));
    tablica[0] = 5;
    tablica[1] = -12;
    tablica[2] = 33;
    return &tablica[1];

}

///zadanie 8
void sumToPtr(const int *a, const int *b, int *c){
*c = *a + *b;
}

///zadanie 11
int sumSqrs(const int *num1, int *const num2){
return (*num1 * *num1) + (*num2 * *num2);
}

///zadanie 14
double multPtrs(const double *num1, double *const num2){
return (*num1) * (*num2);
}

///zadanie 16
void swap(int *ptr1, int*ptr2){
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
    }

///zadanie 17
void swapSign(double *ptr1, double *ptr2){
    if (*ptr1 * *ptr2 <= 0){
    double x = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = x;
    }
    }




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


    ///zadanie 5
    int *tablica1 = initInts();
    printf("%d", *tablica1);


    ///zadanie 8
    const int a = 5;
    const int b = 10;
    int c = 0;
    sumToPtr(&a, &b, &c);
    printf("%d", c);

    ///Zadanie 11
    const int a = 5;
    int b = 10;
    int wynik = sumSqrs(&a, &b);
    printf("%d", wynik);
            */
    ///zadanie14
    double a = 5.1;
    double b = 1.5;
    double wynik = multPtrs(&a, &b);
    printf("%f", wynik);
/*
    ///zadanie 16
    int a = 10;
    int b = 27;
    swap(&a, &b);
    printf("a = %d, b = %d", a, b);

    ///zadanie 17
    double a = 10.1;
    double b = -27.2;
    swapSign(&a, &b);
    printf("a = %f, b = %f", a, b);
*/
}
