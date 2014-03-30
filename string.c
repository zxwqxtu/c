#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

char *input( char *, int);
char *inputBlank( char *, int);
char *strPos(char *, char);
short is_within(char, char *);
int strtoi(char *);

int main(int argc, char *argv[])
{
    char c;
    if (argc<2) {
        printf("请输入文件名");
        return 0;
    }
    while((c=getchar()) != EOF) {
        if (0 == strcmp(argv[1], "-p")) {
            putchar(c);
        }else if (0 == strcmp(argv[1], "-u")) {
            putchar(toupper(c));
        }else if(0 == strcmp(argv[1], "-l")) {
            putchar(tolower(c));
        }
    }
    return 0;

    /*
    char *pstr = "22abc";
    char c = '5';
    printf("%d\t%d\t%d", (int) *pstr-48, c-48, strtoi(pstr));
    return 0;
    */

    /*
    const int LENGTH = 20;
    char str[LENGTH];
    char c;
    while(scanf("%c %s", &c, str)) {
        while(getchar()!='\n');
        if (c == '0') break;
        printf("%c--%s%u\n", c, str, is_within(c, str));
    }
    */

    return 0;
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

char *strPos(char *pStr, char c)
{
    while(*pStr != '\0') {
        if (*pStr == c) {
            return pStr;
        }
        pStr++;
    }
}

short is_within(char c ,char *str)
{
    while(*str != '\0') {
        if (*str++ == c) {
            return 1;
        }

    }
    return 0;
}

int strtoi(char *pstr)
{
    int i=0;
    while(*(pstr+i) != '\0') {
        if (!isdigit(*(pstr+i))) {
            break;
        }
        i++;
    }

    if (i == 0) {
        return 0;
    }
    int num=0;
    for (int n=0; n<i; n++) {
        num += (*(pstr+n)-48) * pow(10, i-n-1);
    }
    return num;

}
