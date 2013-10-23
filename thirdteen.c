#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char str[25];
//    scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);
    int a[128] = {0};
    int length = strlen(str);
    for(int i=0; i<length; i++) {
        a[tolower(str[i])]++;
    }
    float b[128] = {0.0};
    float bb[128] = {0.0};
    for(int i=0; i<128;i++) {
        if (a[i]>0) {
            b[i] = a[i]*100.0f/length;
            bb[i] = b[i];
        }
    }
    //排序
    float swap;
    
    for (int i=0;i<128;i++) {
        for (int j=i+1;j<128;j++) {
            if (b[i]>b[j]) {
                swap = b[i];
                b[i] = b[j];
                b[j] = swap; 
            }
        }
    }
    
    char c;
    bool cc[128] = {0};
    char *p = NULL;
    for(int i=127;i>=0;i--) {
        if (b[i] > 0.0) {
            for (int j=0;j<128;j++) {
                if (bb[j] == b[i]) {
                    if (!cc[j]) {
                        c = j; 
                        cc[j] = 1;
                        break;
                    }
                }
            }
            printf("%c--%5.2f\n", c, b[i]);
        }
    } 
}
