#include <stdio.h>
#include <stdlib.h>

int testCalled(void);
void countNum(void);
int *make_array(int, int);

int main(void)
{
    const int length = 10;
    int val = 3;
    int *a = make_array(length, val);
    int aa[length]= a;
    for(int i=0; i<length; i++) {
        printf("%d\t", aa[i]);
    }
    return 0;


    countNum();
    return 0;

    int num = 0;
    int total;
    puts("Please enter int:");
    scanf("%d", &total);

    for(int i=0; i<total; i++) {
        num = testCalled();      
    }
    printf("%d", num);
    return 0;
}

int testCalled(void)
{
    static int num = 1;
    return num++;
}

void countNum(void)
{
    int n = 0;
    int arr[11]={0};

    int _srand=0;
    scanf("%d", &_srand);
    srand(_srand);

    while(n<1000) {
        int num;
        if(num = (rand()%11)) {
            n++;
            arr[num]++;
        }
    }
    for(int i=1; i<11; i++) {
        printf("%d\t%d\n", i, arr[i]);
    }
}

int * make_array(int elem, int val)
{
    int *p_array = (int *) malloc(elem*sizeof(int)); 
    for (int i=0; i<elem; i++) {
        *(p_array+i) = val;
    }
    return p_array;
}
