#include<stdio.h>
#include<string.h>

int main(){
    char x[20];
    char y[20];

    fgets(x,sizeof(x), stdin);
    fgets(y,sizeof(y), stdin);


    int cmp = strcmp(x,y);

    if(cmp < 0){
        printf("%s\n", x);
    }
    else{
        fputs("%s\n", y);
    }

    return 0;
}