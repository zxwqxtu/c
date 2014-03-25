#include <stdio.h>

int copy_arr(double [], double [], int);
int copy_ptr(double *, double *, int);
int getKey(double *, int);

int main(void)
{

    double source[5] = {1.1, 12.2, 3.3, 4.4, 5.5};
    double *source1 = source+2;
    double target3[3];
    source[4] = 8.8;
    copy_ptr(source1, target3, 3);
    for(short i=0; i<3; i++)
        printf("%f\t", *(target3+i));
    return 0;

    double target1[5], target2[5];
    copy_arr(source, target1, 5);
    copy_ptr(source, target2, 5);
    printf("%.2f\n%6.1f\n%-3d\n", target1[1], target2[1], getKey(source, 5)); 
}

int copy_arr(double source[], double target[], int length)
{
    for(int i=0; i<length; i++) {
        target[i] = source[i];
    }
    return 0;
}

int copy_ptr(double * source, double * target, int length)
{
    for(int i=0; i<length; i++)
        *(target+i) = *(source+i);
    return 1;
}

int getKey(double arr[], int length) {
    double val=*arr;
    int key = 0;
    for (int i=1; i<length; i++) {
        if (*(arr+i) > val) {
            key = i;
            val = *(arr+i);
        }
    }
    return key;
    
}
