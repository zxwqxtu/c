#include <stdio.h>

int main(void)
{
    int count = 0;
    do {
        int count = 0;
        count++;
        printf("%d\t", count);
    } while(count++<8);
    
    int pv = 1, pv2 = 2;
    int *p, *p2 = NULL;
    p = &pv;
    p2 = &pv2;
    printf("\n%p\t%d\t%p\t%d\n", p, *p, p2, *p2);
    int *pt = p;
    p = p2;
    p2 = pt;
    printf("%p\t%d", p, *p);
}
