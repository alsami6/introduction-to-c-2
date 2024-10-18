#include<stdio.h>

int main(){
    int a,b,c;
    char p;
    scanf("%d %c %d = %d", &a, &p, &b, &c);

    // printf("%d %c %d = %d", a, p, b, c);
    if(p == '+'){
        if(a + b == c){
            printf("Yes");
        }
        else{
            printf("%d", a+b);
        }
    }
    else if(p == '-'){ 
        if(a - b == c){
            printf("Yes");
        }
        else{
            printf("%d", a-b);
        }
    }
    else if(p == '*'){
        if(a * b == c){
            printf("Yes");
        }
        else if(a * b != c){
            printf("%d", a*b);
        }
    }

    return 0;
}