#include <stdio.h>

int sum(int * start, int * end) {
    int total = 0;
    while(start < end) {
        total += *start;
        start++;
    }
    return total;
}

int main(void) {
    const int SIZE = 5;
    int a[5] = {3, 2, 3, 4, 5};
    printf("%d\t%d\n", *(a+1), sum(a, a+SIZE));
}
