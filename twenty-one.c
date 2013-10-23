#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define LENGTH 1000

int main(void)
{
    char **pStr = NULL, **pStr1=NULL, tmp[LENGTH];
    int num = 0;
    int a[2][3] = {{1,2,3},{4,5,6}};
    //printf("%d\t%d", *(*a+1), *(*(a+1)+1));
    
    while(true) {
        printf("请输入谚语%d:", num+1);
        free(pStr1);
        pStr1 = (char **) malloc(sizeof(pStr));
        for (int i=0;i<num; i++) {
            *(pStr1+i) = (char *) malloc(sizeof(*(pStr+i)));
            for (int j=0; j<strlen(*(pStr+i)); j++) {
                *(*(pStr1+i)+j) = *(*(pStr+i)+j);
            }
        }
        scanf("%s", tmp);
        if (strcmp(tmp, "end")== 0) {
            break;
        }

        free(pStr);
        pStr = (char **) malloc((1+strlen(tmp))*sizeof(char)+sizeof(pStr1));
        for (int i=0;i<num; i++) {
            *(pStr+i) = (char *) malloc(sizeof(*(pStr1+i)));
            for (int j=0; j<strlen(*(pStr1+i)); j++) {
                *(*(pStr+i)+j) = *(*(pStr1+i)+j);
            }
        }
        *(pStr + num) = (char *) malloc((1+strlen(tmp))*sizeof(char));
        /*
        for (int i=0; i<strlen(tmp); i++) {
            *(*(pStr+num)+i) = tmp[i];
        }
        *(*(pStr+num)+strlen(tmp)) = '\0';
        */
        strcat(*(pStr+num), tmp);
      //  printf("%sxxx\t%d\n", *pStr,num);return 0;
   //     printf("xxx\n");return 0;
        num++;
        
    }
    int *pLength = NULL;
    pLength = (int *) malloc(num*sizeof(int));
    for(int i=0; i<num;i++) {
        *(pLength+i) = strlen(*(pStr+i));
        //printf("\n%s", *(pStr+i));
    }
    int swap;
    for(int i=0; i<num;i++) {
        for (int j=i; j<num; j++) {
            if(*(pLength+i)<*(pLength+j)) {
                swap = *(pLength+j);
                *(pLength+j) = *(pLength+i); 
                *(pLength+i) = swap;
            } else if(*(pLength+i) == *(pLength+j)){
                *(pLength+i) = 0;
            }
        }
    }
    printf("\n%d\n",num);
    for(int i=0;i<num;i++) {
        if (*(pLength+i) == 0) {
            continue;
        }
        for (int j=0;j<num;j++) {
            if (strlen(*(pStr+j)) == *(pLength+i)) {
                printf("%s\t", *(pStr+j));
            }
        }
    }
}
