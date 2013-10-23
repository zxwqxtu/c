#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("game start ? y/n\n");
    char flag;
    scanf(" %c", &flag);
    if (tolower(flag) == 'n') {
        return 0;
    }
    unsigned int num = 0;
    int value = 0, value2, sum = 0;
    while(true) {
        srand(time(NULL));
        num++;
        value = pow10(num-1)+rand()%(10*num);
        printf("please enter the number\n%d ", value);
        fflush(stdout);
       
        clock_t now = clock();
        for(clock_t t=clock(); clock()<t+CLOCKS_PER_SEC; );
        printf("\r");
        for(int i=0;i<num;i++) {
            printf(" ");
        }
        scanf(" %d",&value2);
        if (value != value2) {
            break;
        }
        sum += num;
        printf("您是否还继续玩?y/n\n");
        scanf(" %c", &flag);
        if (tolower(flag) == 'n') {
            break;
        }
        
    } 
    printf("\n您的总得分为:%d", sum);
    return 0;
}


