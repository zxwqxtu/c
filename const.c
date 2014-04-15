#include <stdio.h>
#include <stdlib.h>

void dealArray(const int [], int);

int main(void)
{

    const int len = 4;
    int a[len] = {1,2,3,4};
    dealArray(a, len);


    int num = 2;
    int num2 = 21;
    int *pNum;
    const int * const pNum2 = &num;
    pNum2 = &num2;
    //pNum2 = (int *) malloc (sizeof(int));
    //*pNum2 = 2;
    num = 3;
    printf("%d\t%d", *pNum2, a[2]);
    //*pNum = *pNum2;

}

void dealArray(const int a[], int len)
{
    for(int i=0; i<len; i++) {
        //a[i] += 1;
    }
}
