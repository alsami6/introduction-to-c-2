#include<stdio.h>
#include<limits.h>

int main(){
    int a,b,c;

    int *x = &a,*y = &b,*z = &c;

    scanf("%d %d %d", &*x,&*y,&*z);
    int min = *x;
    int max = *x;

    if(*y < min){
        min = *y;
    }
    if(*y > max){
        max = *y;
    }
    if(*z < min){
        min = *z;
    }
    if(*z > max){
        max = *z;
    }

    printf("%d %d", min, max);


    return 0;
}