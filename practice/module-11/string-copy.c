#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    char b[10] = "abcdef" ;
    
    strcpy(a, b);

    printf("%s %s", a,b);


    return 0;
}