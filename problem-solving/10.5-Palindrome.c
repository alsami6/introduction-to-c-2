#include<stdio.h>

int main(){
    char str[1005];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    
    if(str[strlen(str) - 1] == '\n'){
      str[strlen(str) - 1] = '\0';
    }

    int pal = 1;

    for(int i = 0, j = len - 1; i <= len; i++, j--){
        if(str[i] != str[j]){
            pal = 0;
            break;
        }
    }



    if(pal == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}