#include <stdio.h>
#include <stdlib.h>
/*
int operation(int number) {
    return 3*number;
}
int calculate(int (*operation) (int liczba), int number) {
    return operation(number);
}
int main()
{
    int (*wsk_operation) (int number) = operation;
    printf("%d\n", calculate(operation, 3));
    return 0;
}


///zadanie 2

int func(int a){

    return a;
}

void applyFunction(int (*func)(int), int start, int end){
    for(int i = start;  i <= end; i++){
        printf("%d\n", func(i));
}
}

int main() {

applyFunction(func, 3, 9);
return 0;
}

///zadanie 4

double operation(double a, double b){
    return a + b;
}
double calculateOperation(double (*operation)(double, double), double numer1, double numer2){
    return operation(numer1, numer2);
}

int main(){
    printf("%fl", calculateOperation(operation, 2.2, 1.0));
    return 0;
}

int modifier(int a){
    return a + 11;
}

int modifyAndSum(int (*modifier)(int), int numer1, int numer2){
    numer1 = modifier(numer1);
    numer2 = modifier(numer2);
    return numer1 + numer2;
}


int main(){
    printf("%d", modifyAndSum(modifier, 10, -11));
    return 0;
}
*/

void operation(int a){
    printf("Wykonano: %d razy\n", a);
}

void executeSequence(void (*operation)(int), int count){
    for(int i =1; i <= count; i++){
        operation(i);
    }
}
int main(){
    executeSequence(operation, 9);
return 0;
}
