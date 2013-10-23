#include <stdio.h>
int main(void)
{
    enum WeekDay {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    enum WeekDay today = Tuesday;
    switch(today)
    {
        case Sunday:
            printf("Today is Sunday");
            break;
        case Monday:
            printf("Today is Monday");
            break;
        default:
            printf("Today is ok\n");

    }
    char c;
    scanf("%c",&c);
    islower(c) && printf("%c",toupper(c));
}
