#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int age = 0;
    int college = 0;
    int subject = 0;
    bool isOk = 0; 
    printf("please your age:");
    scanf("%d",&age); 
    printf("haff is 1,yelo is 2,others is 3\nplease input the number:");
    scanf("%d",&college);
    printf("the subject:encomic is 1,chemistr is 2,others is 3\nplease input:");
    scanf("%d",&subject);
    if (age>25 && subject == 2 && college != 2) {
        isOk = true;
    } else if (college == 2 && subject == 2) {
        isOk = true;
    } else if (age<28 && college == 1 && subject == 1) {
        isOk = true;
    } else if (age>25 && college == 2 && subject != 2) {
        isOk = true;
    }
    
    isOk && printf("\nYou are ok!");
    !isOk && printf("\nYou are no!");
}
