#include <stdio.h>
#include <ctype.h>

char *input( char *, int);
char *inputBlank( char *, int);

int main(void)
{
    const int LENGTH = 20;
    char str[LENGTH];
    char *str1;

    str1 = inputBlank(str, LENGTH);
    puts(str1);
    return 0;
    //gets(str);
    scanf("%s", str);
    puts(str);
    printf("%s", str);
    /*
    char str1[50] = "\nabc" "def" "gh";
    char * c = "I love you";
    c[0] = 'i';
    printf("%s", c);
    */
    return 0;
    /*
    gets(str);
    puts(str);
    puts(str1);
    //printf("%s", str);
    */
}

char *input(char *pstr, int n)
{
    return fgets(pstr, n, stdin);
}

char *inputBlank(char *pstr, int n)
{
    int num = 0;
    char ch;
    while(num<n && !isspace(ch = getchar())) {
        *(pstr+num) = ch;
        num++;
    }
    *(pstr+n) = '\0';
    return pstr;
}
