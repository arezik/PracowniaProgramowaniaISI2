#include <stdio.h>
#include <stdlib.h>
void multiplyElementwise(int n, double tab1[n], double tab2[n], double tab3[n]){
    for(int i = 0; i < n; i++){
        tab3[i] = tab1[i] * tab2[i];
    }for(int i = 0; i < n; i++){
        printf("%f, ", tab3[i]);
        }
}
///zad32
int sumDivisableBy3(int n, int tab[n]){
    int wynik = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % 3 == 0){
            wynik += tab[i];
        }
    }return wynik;
}

///zad36
void sumArrays(int m, double array1[], double array2[], double arrayResoult[]){
    for(int i = 0; i < m; i++){
        arrayResoult[i] = array1[i] + array2[i];
    }
}
///zad40
void replaceWithPower(int n, int tab[n]){
    for(int i =1; i < n; i++){
        tab[i] = pow(tab[i], i);
    }
}

///zad44
int countDivisible(int n, int tab[], int divisior){
        int wynik = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % divisior == 0){
            wynik += 1;
        }
    }return wynik;
}


