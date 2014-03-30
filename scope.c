#include <stdio.h>

int main(void)
{
    int i=0;
    int num=0;
    for(int i=0; i<5; i++) {
        int num = i;
        printf("%d\t", num);
    }

    printf("\n%d\t%d", i, num);
}
