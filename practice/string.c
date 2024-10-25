#include<stdio.h>

int main(){
    // char str[200];

    // scanf("%[^\n]s", str);

    // fgets(str, sizeof(str), stdin);

    // fputs(str, stdout);
    

    char str[] = "Bangladesh is a \"beau\0tiful\" country";

    puts(str);


    return 0;
}