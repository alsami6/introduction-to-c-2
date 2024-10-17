#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int i = 1;
    while (i <= N)
    {
        if (N % 3 == 0 && N % 5 == 0)
        {
            printf(" Yes");
        }
        else{
            printf("No");
        }
        
        i++;
    }

    return 0;
}  