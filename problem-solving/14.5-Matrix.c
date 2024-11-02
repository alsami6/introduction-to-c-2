#include<stdio.h>
#include<math.h>


int main(){
    int n;
    scanf("%d", &n);

    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        } 
    }
    
    int main_daigonal = 0, sec_daigonal = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                main_daigonal += a[i][j];
            }
            if(i + j == n - 1){
                sec_daigonal += a[i][j];
            }
        }
    }

    int diff = abs(main_daigonal - sec_daigonal);

    printf("%d", diff);


    return 0;
}




// 1  5  12  1
// 2 -4  6   7
// 3  8  5   9
// 3  5  23 -6      