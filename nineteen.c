#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
    int length;
    printf("你需要计算几个质数：");
    scanf(" %d", &length);
    int n = 1, numbers[length]; 
    int num = 0;
    bool flag = true; 
    while(++n) {
        if (num>=length) {
            break;
        }
        flag = true;
        for (int i=0; i<num; i++) {
            if ((numbers+i) == NULL) { //&numbers[i]
                break;
            }
            if (n % numbers[i] == 0) {
                flag = false;
            }
        } 
        if (flag) {
            numbers[num++] = n;
        }
    }

    //output
    printf("\n");
    for (int i=0; i<length; i++) {
        printf("%d\t", numbers[i]);
    }

    //指针实现
    int *pNumbers;
    pNumbers = (int *)malloc(length*sizeof(int));
    if (pNumbers == NULL) {
        printf("内存不足\n");
        return 0;
    }
    n = 1;
    num = 0;
    while (++n) {
        if (num>=length) {
            break;
        }
        flag = true;
        for (int i=0; i<num; i++) {
            if (n % *(pNumbers+i) == 0) {
                flag = false;
            }
        }
        if (flag) {
            *(pNumbers+(num++)) = n;
        }
    }
    printf("\n指针结果\n");
    for (int i=0; i<length; i++) {
        printf("%d\t", *(pNumbers+i));
    } 

    free(pNumbers);
    return 0;
}
