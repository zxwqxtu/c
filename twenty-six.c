#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFTER_LEN 20
char *str_in(void);
int main(void)
{
    printf("\n%s", str_in());
}
char *str_in (void)
{
    char buffer[BUFFTER_LEN];
    char *pString = NULL;

    if (gets(buffer) == NULL) {
        printf("\n Error reading string.\n");
        exit(1);
    }
    if (buffer[0] == '\0') {
        return NULL;
    }
    printf("\n%s\t%d\t%d\t%d\n", buffer, strlen(buffer), sizeof(buffer), sizeof(char));
    pString = (char *) malloc(strlen(buffer) * sizeof(char)+1);
    if (pString == NULL) {
        printf("\nOut of memory.");
        exit(1);
    }
    return strcpy(pString, buffer);
}
