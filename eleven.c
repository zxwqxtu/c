#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("The character \0 is used to teminate a string.");
    char str[3] = "ab";
    char str1[40] = "To be or not to be";
    char str2[] = ",that is the question";
    int count = 0;
    while(str1[count])
        count++;
    printf("\nThe length of the string \"%s\" is %d characters--%ld.", str1,count,sizeof str1);

    int count1=0;
    while(str2[count1])
        count1++;
    if (sizeof str1 > count+count1) {
        int n=0;
        while(str2[n]) {
            str1[count++] = str2[n++]; 
        }
        str1[count] = '\0';
    }

    printf("\n%s\n",str1);

    char str3[4] = "ab";
    char str4[] = " xxxxxxx";
   // strcat(str3, str4);
    for (int i=0;i<5;i++) {
        str3[i+4] = i;
    }
    printf("\n%s\t%d\t\%d\nok", str3, strlen(str3), sizeof str3); 

    if (sizeof str3 > strlen(str3) +strlen(str4)) {
        strcat(str3, str4);
        printf("\n%s\n", str3); 
    }

    return 0;
}
