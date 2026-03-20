#include <stdio.h>
#include <stdlib.h>

    ///zadanie1
void sumTwoNumbers(int a, int b){
    int suma = a + b;
    printf("%d", suma);
}
    ///zadanie2
float caculateAbsoluteValue(float a){
    if (a < 0.0) {
        return -a;
    }else{
        return a;
    }
}
    ///zadanie5
int sumSquares(int n){
    int suma = 0;
    int n2 = n;
    for(int i = 1; i <= n2; i++){
        suma = suma + n;
        n = n*n2;
    }
    return suma;
}
    ///zadanie 8
void countFunctionCalls(){
    static int licznik = 0;
    licznik++;
    printf("Liczba wywyloan: %d\n", licznik);
}
    ///zadanie 10
int fibonacci(int n){
    if(n<=0){
        return 0;
    }if(n == 1){
    return 1;
    }else{
    return fibonacci(n-1) + fibonacci(n-2);
    }
}
    ///zadanie11
int calculateArithmeticSequenceRecursively(int n, int d) {
    if (n <= 1) {
        return 1;
    }
    return calculateArithmeticSequenceRecursively(n - 1, d) + d;
}


int main()
{
printf("enty wyraz ciagu arytmetycznego to: %d\n", calculateArithmeticSequenceRecursively(5,3));
printf("Wynik to: %d\n", fibonacci(7));
countFunctionCalls();
countFunctionCalls();
countFunctionCalls();
countFunctionCalls();
countFunctionCalls();
}
