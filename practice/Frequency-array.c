#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int f[100000] = {0};

    for(int i = 0; i < n; i++){
        f[a[i]] = 1;
    }

    // for(int i = 0; i < 10; i++){
    //     printf("%d ", f[i]);
    // }

    int m;
    scanf("%d", &m);

    for(int i = 0; i < m; i++){
        int x;
        scanf("%d", &x);

        printf("%d ", x);

        if(f[x] == 1){
            printf("achee\n");
        }
        else{
            printf("nei\n");
        }
    }

    return 0;
}