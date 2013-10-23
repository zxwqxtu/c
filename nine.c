#include <stdio.h>
#include <stdbool.h>
# define WIDTH 3
int main(void)
{
    printf("A,B两人对决，A输入A，B输入B\n");
    char values[WIDTH][WIDTH];
   for(short k=0;k<WIDTH;k++) {
       for(short j=0;j<WIDTH;j++) {
           values[k][j] = (char)(48+k*WIDTH+j);
       }
   }

    unsigned short key = 0;
    bool flag = true;
    for(short i=0;i<WIDTH*WIDTH;i++) {
       flag = true;      
       for(short k=0;k<WIDTH;k++) {
           for(short j=0;j<WIDTH;j++) {
               printf("%c\t", values[k][j]);
           }
           printf("\n");
       }

       if (i%2) {
            printf("B输入方格位置0-8："); //B
            scanf(" %d", &key);
            values[key/WIDTH][key%WIDTH] = 'B'; 
       }else {
            printf("A输入方格位置0-8："); //A
            scanf(" %d", &key);
            values[key/WIDTH][key%WIDTH] = 'A'; 
       } 

       printf("\n");
       //验证
       for(short n=0;n<WIDTH;n++) {
           //row
           if (values[n][0] != 'A' && values[n][0] != 'B') {
               continue;
           }
            for(short jj=0;jj<WIDTH;jj++) {
               if (values[n][0] != values[n][jj]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                printf("%c win!", values[n][0]);
                return 0;
            }
       }

    }

}
/*
function void outPut(array) {

}
*/
