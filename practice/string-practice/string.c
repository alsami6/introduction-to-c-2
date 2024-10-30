#include<stdio.h>

int main(){
    char arr[] = "with in 3 years will get the job\0";
    int i = 0;
    while(arr[i] != '\0'){
        printf("%c", arr[i]);
        i++;
    }

    return 0;
}