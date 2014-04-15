#include <stdio.h>
#include <stdlib.h>

int a = 1;
static int b = sizeof(int);
int main(void)
{
    int *arr = NULL;
    arr = (int *) malloc(a*sizeof(int));
    if (arr == NULL) {
        puts(" Out of memory!");
        exit(EXIT_FAILURE);
    }
    *arr = 1;
    free(arr);
    for(int i=0; i<10000;i++) {
        double *p = (double *) malloc (10*sizeof(double));
        free(p);
    }
    printf("%d\t%p\t%d", b, arr, *arr);
}
