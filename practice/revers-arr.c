#include<stdio.h>

int a[100000];
int b[100000];


int main(){
    int len;
    scanf("%d", &len);

    for(int i = 0; i < len; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0, j = len - 1 ; i < len; i++, j--){
        b[j]= a[i];
    }

    for(int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < len; i++){
        printf("%d ", b[i]);
    }

    return 0;
}