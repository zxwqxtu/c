#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_LEN 1000

long *IncomePlus(long *pPay);
char *str_in(void);

int main(void)
{
    long your_pay = 30000L;
    long *pold_pay = &your_pay;

    long *pnew_pay = NULL;
    pnew_pay = IncomePlus(pold_pay);
    printf("\nOld pay = $%ld", *pold_pay);
    printf("\nNew pay = $%ld\n", *pnew_pay);

    char *tmpStr = NULL;

    while((tmpStr = str_in()) != NULL) {
        printf("\n%s\t%p\t", tmpStr, tmpStr);
        //free(tmpStr);
    }
   
    return 0;
}

long *IncomePlus(long *pPay)
{
    *pPay += 10000L;
    return pPay;
}

char *str_in(void)
{
    char buffer[BUFFER_LEN];
    char *pString = NULL;
    //读取流失败
    if (gets(buffer) == NULL) {
        printf("\nError reading string.\n");
        exit(1);
    }

    if (buffer[0] == '\0') {
        return NULL;
    }
    //分配内存失败
    pString = (char *) malloc(strlen(buffer)+1);
    if (pString == NULL) {
        printf("\nOut of memory.\n");
        exit(1);
    }
    return strcpy(pString, buffer);
}
