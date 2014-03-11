#include <stdio.h>

double countPower(double num, int count);

int main(void)
{
    printf("%3.2f", countPower(4.5, 5));    
}

double countPower(double num, int count)
{
    if (count == 1) {
        return num;
    }
    return num * countPower(num, --count);
}
