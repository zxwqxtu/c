#include <stdio.h>
int main(void)
{
    
    unsigned short flag;
    printf("please the convert:");
    scanf("%d", &flag);
    float wendu , wendu2 = 0.0f;
    printf("please the wendu:");
    scanf("%f",&wendu);
    
    char ok;
    printf("You must count it ?y/n\n"); 
    scanf(" %c",&ok);
    if (toupper(ok) == 'N') {
       return 0; 
    }
    
    switch(flag) {
        case 0:
            wendu2 = wendu*1.8+32;
            break;
        case 1:
            wendu2 = (wendu-32)/9*5;
            break;
    }
    printf("%.2f",wendu2);
    return 0;
}
