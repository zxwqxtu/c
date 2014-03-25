#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>
void inputChar(void);

int main(int argc, char *argv[])
{
    inputChar();
    return 0;

    int ch, input;
    while(!scanf("%d", &input)) {
        while((ch=getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value,such as 25: ");
    }
    printf("%d", input);
    return 0;

    while((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;

    double total = 100;
    short year = 0;
    while(total >0) {
        year++;
        total *= (1+0.08);
        total -= 10;
    }
    printf("%d", year);
    return 0;

    char c;
    char cc[255];
    for (short i=0; i<255; i++) {
        if (!scanf("%c",&cc[i]) || cc[i] == '\n') {
             break;   
        }
    }

    printf("%s", cc);
    return 0;

    scanf("%s", cc);

    scanf("%c", &c);
    for (char ch='A'; ch<=c; ch++) {
        for (char i=c; i>ch; i--) {
            printf(" ");
        }

        for (char chh='A'; chh<=ch; chh++) {
            printf("%c", chh);
        }

        for (char chh=ch-1; chh>='A'; chh--) {
            printf("%c", chh);
        } 
        printf("\n");
    }
    
    return 0;

    const int SIZE = 5;
    int score[SIZE];

    for (int i=0; i<SIZE; i++) {
        scanf("%d", &score[i]);
    }

    for (int i=0; i<SIZE; i++) {
        printf("%5d", score[i]);
    }
}

void echo(int a, int b)
{
    printf("hello world!");
}

void inputChar(void)
{
    char ch;
    short position = -1;
    while((ch=getchar()) != '\n') {
        if (isupper(ch)) {
            position = 1 + ch - 'A';
        } else if(islower(ch)) {
            position = 1 + ch - 'a';
        } else {
            position = -1;
        }
        printf("%d", position);
        //putchar('0'+position);
        putchar(' ');
    }
}
