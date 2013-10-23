#include <stdio.h>
#include <ctype.h>
int main(void)
{
    unsigned short width,height;
    /*
    printf("请输入计算长度：");
    scanf(" %d", &width);
    for(int i=1;i<=width;i++) {
        for(int n=1;n<=width;n++) {
            printf("%d\t",i*n);
        }
        printf("\n");
    }
    printf("您输出0-127之间的某个数字：");
    scanf(" %d", &width);
    isgraph((char)width) && printf("%c\n",(char)width);
    */

    printf("请输入长:");
    scanf(" %d", &width);
    printf("请输入宽:");
    scanf(" %d", &height);
    for(int i=1;i<=height;i++) {
        for(int n=1;n<=width;n++) {
            if ((i==1 || i==height) || (n==1 || n==width)) {
                printf("*");
            }else {
                printf(" ");
            }
            printf("\t");
        }
        printf("\n");
    }

}
