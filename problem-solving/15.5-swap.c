#include<stdio.h>

int main(){
    int x,y;

    int *a = &x, *b = &y;

    scanf("%d %d", &*a,&*b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("%d %d", *a, *b);

    return 0;
}