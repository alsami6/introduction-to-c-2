#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n % 2 ==  0){
        printf("Even\n");
        if(n < 0){
            printf("Negetive");
        }else{
            printf("Possitive");
        }
    }else{
        printf("Odd\n");
        if(n < 0){
            printf("Negetive");
        }else{
            printf("Possitive");
        }
    }

    return 0;
}