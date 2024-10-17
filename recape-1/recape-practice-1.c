#include<stdio.h>

int main(){
    char cha;
    scanf("%c", &cha);
    char capital = 0;
    char small =  0;

    if(cha > '`'){
        small = cha - 32;
        printf("%c", small);
    }
    if(cha < 'a'){
        capital = cha + 32;
        printf("%c", capital);
    }

    return 0;
}