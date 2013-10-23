#include <stdio.h>

int main(void)
{
    char multiple[] = "My string";
    char *p = &multiple[0];
    printf("\n%p--%p--%s\n", p,&multiple[0], p);
    p = multiple;
    printf("%p--%c--%c",p,*p,*(p+1));

    /* ---- */

    long mulLong[] = {15L, 25L, 35L};
    long *pMulLong = mulLong;
    printf("\n%ld\t%ld\t%ld\n",sizeof(long), sizeof(mulLong), sizeof(mulLong[0]));
    printf("\n%ld\t%ld\t%ld", mulLong[0], *pMulLong, *(pMulLong+1));
    for(int i=0; i<sizeof(mulLong)/sizeof(long); i++) {
        printf("\n%p\t%ld", (mulLong+i), *(mulLong+i)); 
    }

    /* ---- */

    char board[3][3] = {
        {'1', '2', '3'}, 
        {'4', '5', '6'}, 
        {'7', '8', '9'} 
    };
    char *pBoard = *board;
    printf("\n%c\t%c\t%c\t%c\t%c", board[0][0], *board[0], **(board+1), *(*board+1), *(pBoard+1));

    /* ---- */
    char *pStr, str, strArr[100];
    scanf("%c", &str);
    scanf("%s", strArr);
    scanf("%s", pStr);
    printf("[%c][%s][%s]",str, strArr, pStr);
}
