#include <stdio.h>

void toBinary(int);

int main(void)
{
    int num;
    while(!scanf("%d", &num)) {
        printf("must int type, please enter again: ");
        while(getchar()!='\n');
    }
    toBinary(num); 
}

void toBinary(int num)
{
    if (num>1) {
        toBinary(num/2);
    }
    printf("%d", num%2);
    return;
}
