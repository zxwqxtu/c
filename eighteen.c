#include <stdio.h>
int main(void)
{
    int number = 15;
    int *pointer = NULL;
    int *point = &number;
    pointer = &number;
    int result = 0;
    *pointer = 13;
    printf("%p\t%p\t%p\n",pointer, &number, &point);
    printf("%d\t%d\t%d", *pointer,number,*point);

    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2;
    ++num2;
    num2 += *pnum;
    pnum = &num2;
    ++*pnum;
    printf("\nnum1=%ld num2=%ld *pnum=%ld *pnum+num2=%ld\n",num1,num2,*pnum,*pnum+num2);

    int *pvalue = 0;
    printf("%c", pvalue == NULL?'X':'C');

    long value = 9999L;
    const long *pValue = &value;
    long *const pValue2 = &value;
    *pValue2 = 2222L;
    value = 1111L;
    printf("\n%ld\t%ld\t\%ld\n",*pValue, value, *pValue2);
    return 0;
}
