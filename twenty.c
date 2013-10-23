#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("输入一系列float类型数值：");
    float *pFloat = NULL, *pFloat2 = NULL;
    int n = 0;
    int key = 0;
    /*
    float value;
    while(true) {
        scanf("%f", &value);
        if (n++>3) {
            break;
        }
    }
    return 0;
    */
    /*
    pFloat = (float *) malloc(sizeof(pFloat)*3);
    while(true) {
        if (n>3) break;
        scanf("%f", pFloat+(n++));
    }
    printf("%ld\t%ld\n", sizeof(pFloat), sizeof(float));
    for (int i=0; i<=sizeof(pFloat)/sizeof(float); i++) {
        printf("%f\t", *(pFloat+i));
    }

    return 0;
    */
    /*
    pFloat = (float *) malloc(sizeof(float));
    *pFloat = 34;
    pFloat2 = pFloat;
    free(pFloat);
    printf("%f\t%p\t%f", *pFloat, pFloat, *pFloat2);
    */
    while(true) {
        free(pFloat2);
        pFloat2 = (float *) malloc(n*sizeof(float));

        for (int i=0; i<n; i++) {
            *(pFloat2+i) = *(pFloat+i);
        }
        if (pFloat != NULL) { 
            free(pFloat);    
        }
        n++;

        pFloat = (float *) malloc (n*sizeof(float));
        for (int i=0; i<n-1; i++) {
            *(pFloat+i) = *(pFloat2+i);
        }
        *(pFloat+n-1) = n;
        scanf(" %f", pFloat+n-1);
        if (*(pFloat+n-1) == 0) {
            break;
        }
    }

    float sum = 0.0f;
    for (int i=0;i<n;i++) {
        sum += *(pFloat+i);
    }
    printf("平均值:%.2f", sum/(sizeof(pFloat)/sizeof(float)-1));
    return 0;
    
}

