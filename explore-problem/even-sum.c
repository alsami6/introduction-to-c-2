#include<stdio.h>

int main (){    
    int n;
    scanf("%d", &n);
    int sum = 0;
    // int ld = 0;

    for(int ld = 0; n != 0; n = n/10){

        ld = n % 10;

        if(ld % 2 == 0){
            sum = sum + ld;
        }

    }

    printf("%d", sum);


    return 0;
}