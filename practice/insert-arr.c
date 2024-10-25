#include <stdio.h>

int a[1000000];

int main()
{

    int len;
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);

    len++;
    for (int i = len; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = value;

    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
//  0 1 2 3 4 index
//  4 7 8 5 7  value

//  2 9

//  0 1 2 3 4 5 index
//  4 7 9 8 5 7 value
