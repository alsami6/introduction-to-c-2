#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y;

    int *p1 = &x, *p2 = &y;
    scanf("%d %d", &*p1, &*p2);

    int total = *p1 + *p2;

    printf("%d", total); 


    return 0;
}