#include<stdio.h>
#include<string.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    int f[100005]={0};

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]); 
        f[a[i]] += 1;
    }


    for(int i = 1; i <= m; i++){
        printf("%d\n", f[i]);
    }

    return 0;
}