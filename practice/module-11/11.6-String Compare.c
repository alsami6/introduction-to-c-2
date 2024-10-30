#include<stdio.h>
#include<string.h>

int main(){
    char b[100] = "abc";
    char a[100] = "apple";

    int cmp = strcmp(a, b);


    printf("%d", cmp);


    return 0;
}