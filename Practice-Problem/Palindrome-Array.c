#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n];


    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int pal = 1;

    for(int i = 0, j = n - 1; i <= j; i++, j--){
        if(a[i] != a[j]){
            pal = 0;
            break;
        }
        else{
            break;
        }
    }

    if(pal == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}