#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int r = 0;
    int sum = n ;

    for(int ld = 1; n != 0; n = n/10){
        ld = n % 10;
        r = r + ld;
        r = r * 10;
    }
    r = r / 10;

    sum = sum + r;

    printf("%d", sum);


    return 0;
}