#include <stdio.h>

int main(void)
{
    char operate, operateFlag;
    float num1, num2, num;
    char ch;

    printf("Enter the operation of your choice:\n");
    printf("a. add\t\ts. subtract\n");
    printf("m. multiply\t\td. divide\n");
    printf("q. quit\n");

    while(scanf("%c", &operate)) {
        if (operate != 'a' && operate != 's' && operate != 'm' 
                && operate != 'd' && operate != 'q') {
            printf("enter error type\nplease enter again: "); 
        } else if(operate == 'q') {
            return 0;
        } else {
            break;
        }
    } 

    printf("enter first number: ");
    while(!scanf("%f", &num1)) {
        while(getchar() != '\n');
        printf("enter error type\nplease enter first number again: "); 
    }

    printf("enter second number: ");

    while(true) {
        if (!scanf("%f", &num2)) {
            while(getchar() != '\n');
            printf("enter error type\nplease enter second number again: "); 
        } else if (operate == 'd' && num2 == 0.0) {
            printf("divide can not 0\tplease enter second number again: ");
            continue;
        } else {
            break;
        }
    } 

    switch(operate) {
    case 'a':
        operateFlag = '+';
        num = num1+num2;
        break;
    case 's':
        operateFlag = '-';
        num = num1-num2;
        break;
    case 'm':
        operateFlag = '*';
        num = num1*num2;
        break;
    case 'd':
        operateFlag = '/';
        num = num1/num2;
        break;
    }

    printf("\n%.2f %c %.2f = %.2f", num1, operateFlag, num2, num);

    return 0;
}
