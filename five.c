#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    printf("%d\nEnter the number:",time(NULL));
    unsigned short number;
    scanf(" %d", &number);
    int sum = 0;

    for(int i=0;i<(int)number;i++){
       sum += i; 
       srand(1);
       printf("%d\t", rand()%20);
    }
    printf("\n%d\t%d", (int)number, sum);

    return 0;
}
