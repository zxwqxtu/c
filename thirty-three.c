#include <stdio.h>
#define MAX 100

bool diamond(int num, char flag);
int main(void)
{
    diamond(5, '*');
    return 0;

    for(int i=1; i<10; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
}

bool diamond(int num, char flag)
{
    if (!num%2) {
        printf("必须为奇数");
        return false;
    }

    int key = num/2;

    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            if ((i==j&&i<num-1 && i) || j == key || j+i == key  || j-i == key || i-j == key || i == key) {
                printf("%c\t", flag);
            }  else {
                printf(" \t");
            }

        }
        printf("\n");

    }

    return true;
}
