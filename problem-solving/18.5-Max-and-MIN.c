#include<stdio.h>
#include <stdlib.h>

void max_min(){
    int n;
    scanf("%d", &n);

    int a[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int minimum = 100001;
    int max = -1;

    for(int i = 0; i < n;i++){
        if(minimum > a[i]){
            minimum = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }

    printf("%d %d\n", minimum, max);

}


int main(){

    max_min();

}