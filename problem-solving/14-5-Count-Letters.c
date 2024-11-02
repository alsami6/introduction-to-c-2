#include<stdio.h>
#include<string.h>

int main(){
    char s[10000005];
    scanf("%s", s);

    int len = strlen(s);

    int f[26] = {0};

    for(int i = 0; i < len; i++){
        // char ch = s[i];
        int index = s[i] - 'a';
        f[index] += 1;
    }

    for(int i = 0; i < 26; i++){
        if(f[i] > 0){
            printf("%c : %d\n", i + 'a',f[i]);
        }
    }


    return 0;
}