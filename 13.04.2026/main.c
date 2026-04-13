#include <stdio.h>
#include <stdlib.h>
void multiplyElementwise(int n, double tab1[n], double tab2[n], double tab3[n]);
int sumDivisableBy3(int n, int tab[n]);
void sumArrays(int m, double array1[], double array2[], double arrayResoult[]);
void replaceWithPower(int n, int tab[n]);
int countDivisible(int n, int tab[], int divisior);

int main()
{
    //double tabs1[5] = {123.1, 98.0, 9.0, 2.0, 1.0};
    //double tabs2[5] = {9.0, 2.0, 1.5, 3.0, 2.0};
    //double tabs3[5] = {};
    ///zad28
    //multiplyElementwise(5, tabs1, tabs2, tabs3);
    ///zad32
    int by3[5] = {7,9,2,6,5};
    //printf("%d", sumDivisableBy3(5, by3));
    ///zad36
    //sumArrays(5, tabs1, tabs2, tabs3);
    //printf("\n %f",  tabs3[2]);
    ///zad40
    int tab40[] = {2,3,4,-3,-2};
    replaceWithPower(5, tab40);
    ///zad44
    int tab44[] = {12,7,-9,15,4,21};
    printf("\n%d", countDivisible(6, tab44, 3));
    return 0;
}
