#include<stdio.h>
#include<string.h>

int main(){
    char a[200] = "hello";
    char b[200] = "World";


    strcat(a,b);


    printf("%s", a);


    return 0;
}