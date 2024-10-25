#include <stdio.h>

int a[1000000];

int main()
{
    int lenght;
    scanf("%d", &lenght);
    
    for(int i = 0; i < lenght; i++){
        scanf("%d", &a[i]);
    }

    int index;
    scanf("%d", &index);

    for(int i = index; i < lenght; i++){
        a[i] = a[i + 1];
    }

    lenght--;

    for(int i = 0; i < lenght; i++){
        printf("%d ", a[i]);
    }

    return 0;
}