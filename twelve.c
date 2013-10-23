#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    /*
    char str1[20],str2[20];
    char str = 'a';
    char *str3 = &str;
    printf("%c\n", *str3);
    printf("请输入字符串1:");
    scanf("%5s", str1);
    printf("\n%s\n", str1);
    printf("请输入字符串2:");
    scanf("%1s", str2);
    printf("\n%s\n", str2);
    printf("%d", strcmp(str1, str2));
    if (strcmp(str1, str2)>0) {
        printf(">");
        return 0;
    }
    printf("<");
    return 0;
    */
    /*
    char str1[] = "my name is wq";
    char str2[] = "name";
    char *poStr = NULL;
    poStr = strstr(str1,str2);
    printf("%s", poStr);
    poStr = str1;
    printf("%s", poStr);
    */
    char text[100];
    char substring[40];
    printf("请输入字符串1：");
    fgets(text, sizeof(text),stdin);
    printf("请输入字符串2：");
    fgets(substring, sizeof(substring),stdin);
    printf("%s", strstr(text, substring) == NULL ? "WAS NOT":"WAS");
    char value[] = "98.0932";
    printf("%lf", atof(value));

}
