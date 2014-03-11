#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 100

int add(int *x, int *y);
char *str_in(void);
void swap(char **p1, char **p2) {
    char *pt;
    pt = *p1;
    *p1 = *p2;
    *p2 = pt;
    printf("\n%s\t%s\n", *p1, *p2);
}

int main(void)
{
    char *str, *str2="abcd";
    str = (char *) malloc(sizeof(char)*100);
    gets(str);
    printf("%s", str);
    swap(&str, &str2);

    printf("%s", str);
    int x=1, y= 3;
    printf("%d\t%d", add(&x, &y), x);
    printf("\n%s", str_in());
}

int add(int *x, int *y)
{
    return *x = *x+*y;
}

char *str_in(void) {
    char buffer[LENGTH];
    char *pString = NULL;
    if(gets(buffer) == NULL) {
        printf("\nError reading string.\n");
        exit(1);
    }

    //empty string
    if (buffer[0] == '\0')
        return NULL;
    pString = (char *) malloc (strlen(buffer) + 1);
    if (pString == NULL) {
        printf("\n Out of memory.");
        exit(1);
    }
    return strcpy(pString, buffer);
}
