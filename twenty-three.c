#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float **pFloat = NULL, **pFloat1 = NULL;
    char *pDate = NULL, *pDate1 = NULL;
    int num = 0;
    /*
    float p1,p2,p3;
    scanf("%f %f %f",&p1,&p2,&p3);
    printf("%f",p3);
    return 0;
    */
    while(true) {
        free(pFloat1);
        pFloat1 = (float **) malloc (sizeof(pFloat));
        for (int i=0; i<num; i++) {
            *(pFloat1+i) = (float *) malloc (sizeof(*(pFloat+i)));
            for (int j=0; j<sizeof(*(pFloat+i))/sizeof(float); j++) {
                *(*(pFloat1+i)+j) = *(*(pFloat+i)+j);
            }
        }
        free(pFloat);
        pFloat = (float **) malloc (sizeof(pFloat1)+3*sizeof(float));
        for (int i=0; i<num; i++) {
            *(pFloat+i) = (float *) malloc (sizeof(*(pFloat1+i)));
            for (int j=0; j<sizeof(*(pFloat1+i))/sizeof(float); j++) {
                *(*(pFloat+i)+j) = *(*(pFloat1+i)+j);
            }
        }

        printf("输入三个float数值:");
        *(pFloat+num) = (float *) malloc (3 * sizeof(float));
        scanf("%f %f %f", *(pFloat+num), *(pFloat+num)+1, *(pFloat+num)+2);
        //*(*pFloat+2) = 4.5; 
        if (*(*(pFloat+num)) == 0) {
            break;
        }
        num++;
    }
    for (int i=0; i<num; i++) {
        for (int j=0;j<3;j++) {
            printf("%f\t", *(*(pFloat+i)+j));
        }
        printf("\n");
    }
    printf("xx\t%f", *(*pFloat+2));
    return 0;
}
