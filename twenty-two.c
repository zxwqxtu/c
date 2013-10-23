#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define LENGTH 1000

int main(void)
{
    char *p = NULL;
    p = (char *) malloc(sizeof(char) * LENGTH);
    scanf("%s", p);
    int num = 0;
    for (int i=0; i<strlen(p);i++) {
        if (ispunct(*(p+i)) || isspace(*(p+i))) {
            continue;
        }
        num++;
        printf("%c", *(p+i));
    }
    char *p1 = NULL;
    p1 = (char *) malloc(sizeof(char) * (num+1));
    num = 0;
    for (int i=0; i<strlen(p);i++) {
        if (ispunct(*(p+i)) || isspace(*(p+i))) {
            continue;
        }
    //    strcat(p1, p+i); 
        *(p1+(num++)) = *(p+i);
    }
    *(p1+num) = '\0';
    printf("\n%s", p1);
    return 0;
}

