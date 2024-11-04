#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int x = N / 10;
    int y = N % 10;

    if(y % x == 0 || x % y == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}