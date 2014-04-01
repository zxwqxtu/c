#include <stdio.h>

int number = 1;

int main(void)
{
    int i=0;
    int num=1;
    for(int i=0; i<5; i++) {
        extern int number;
        number = i;
        int num = i;
        printf("%d\t", num);
    }
    if(!num) {
        i = 1;
        int i=1;
    }

    printf("\n%d\t%d", i, num);
}
