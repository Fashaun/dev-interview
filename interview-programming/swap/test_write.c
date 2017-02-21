#include <stdio.h>

void swap(int *, int *);

main()
{

    int x = 7;
    int y = 8;

    printf("%d-%d",x,y);

    swap(&x,&y);

    printf("x:%d-y:%d",x,y);
}

void swap(int *a, int *b)
{

    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

