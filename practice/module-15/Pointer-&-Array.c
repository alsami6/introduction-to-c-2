#include<stdio.h>

int main(){
    int a = 5, b=6;
    int *x = &a, *y = &b;

    int temp = *x;
    *x = *y;
    *y = temp;

    printf("%d %d", a, b);

    return 0;
}