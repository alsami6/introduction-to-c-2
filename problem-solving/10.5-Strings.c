#include<stdio.h>

int main(){
    char a[10];
    fgets(a, sizeof(a), stdin);
    char b[10];
    fgets(b, sizeof(b), stdin);

    if(a[strlen(a) - 1] == '\n'){
      a[strlen(a) - 1] = '\0';
    }
    if(b[strlen(b) - 1] == '\n'){
       b[strlen(b) - 1] = '\0';
    }

    int lenA = strlen(a);
    int lenB = strlen(b);
    
    int elA = 0;
    int elB = 0;

    for(int i = 0; i < lenA; i++){
        elA += 1;
    }

    for(int i = 0; i < lenB; i++){
        elB += 1;
    }

    printf("%d ", elA);
    printf("%d\n", elB);

    printf("%s%s\n", a,b);

    char temp = a[0];  
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);


    return 0;
}