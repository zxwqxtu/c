#include <stdio.h>
int main(void)
{
    long a = 1L;
    long b = 2L;
    long c = 3L;
    double d = 4.0;
    double e = 5.0;
    double f = 6.0;
    long arrLong[10];

    printf("A variable of type long occupies %d bytes.", sizeof(long));
    printf("\nHere are the addresses of some variables of type long:");
    printf("\nThe address of a is : %p The address of b is: %p", &a, &b);
    printf("\nThe address of c is : %p", &c);

    printf("\n\nA variablers of type double occupies %d bytes.", sizeof(double));
    printf("\nHere are the addresses of some variables of type double:");
    printf("\nThe address of d is : %p The address of e is: %p", &d, &e);
    printf("\nThe address of f is : %p", &f);

    printf("\nA array occupies %d bytes.", sizeof(arrLong));
    for(int i=0;i<10;i++) {
        arrLong[i] = i;
        printf("\narrLong[%d]--%p", i,&arrLong[i]);
    }


}
