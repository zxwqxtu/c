#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    for(int i=0; i<10; i++)
        printf("%d\t", rand());

    printf("\n");

    //种子
    srand((unsigned int)time(0));

    for(int i=0; i<10; i++)
        printf("%d\t", rand());

}
