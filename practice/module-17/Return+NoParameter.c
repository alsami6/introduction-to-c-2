#include<stdio.h>

int add(){
    int a,b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    return sum;
}

double getpi(){
    return 3.1416;
}

int main(){

    printf("%d\n", add());
    printf("%lf", getpi());

    return 0;
}