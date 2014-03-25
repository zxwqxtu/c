#include <stdio.h>

void exchange(int *, int *);

int main(void)
{
    int x = 5, y = 6;
    printf("&x=%p\t&y=%p\n", &x, &y);

    exchange(&x, &y);
    printf("&x=%p\t&y=%p\n", &x, &y);

    printf("x=%d;y=%d", x, y);
}

void exchange(int * x, int * y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
