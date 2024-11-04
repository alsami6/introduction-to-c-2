#include<stdio.h>

int main(){
    char str[100005];
    fgets(str, sizeof(str),stdin);

    int len = strlen(str);

    for(int i = 0; i < len; i++){
        if(str[i] == ','){
            str[i] = ' ';
        }
        else if('A' <= str[i] && 'Z' >= str[i]){
           str[i] = str[i] + 32;
        }else if('a' <= str[i] && 'z' >= str[i]){
            str[i] = str[i] -32;
        }
    }

    fputs(str, stdout);

    return 0;
}