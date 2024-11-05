#include<stdio.h>

void add(int a, int b){
    int sum = a + b;
    printf("%d", sum);
    return;
}

void alphacheck(char c){

    if('a' <= c && 'z' >= c){
        printf("Lower\n");
    }
    else{
        printf("Upper\n");
    }

}

int main(){
    // int a,b;
    // scanf("%d %d", &a, &b);

    // add(a, b);

    alphacheck('F');
    alphacheck('z');

    return 0;
}