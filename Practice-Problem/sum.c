#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum;
    int i = 0;

    while(n != 0){
        int ld = n%10;
        n = n/10;
        sum = sum + n;

        i++; 
    }
    printf("%d", i);

    return 0;
}