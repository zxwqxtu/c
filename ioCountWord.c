#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char ch;
    int num = 0;
    int word = 0;
    bool flag = true; //是否是连续空白字符

    while((ch=getchar()) !=EOF) {

        if (isspace(ch) || ispunct(ch)) {
            if (flag && num) word++;
            flag = false;
        } else {
            num++;
            flag = true;
        }
    }
    if (flag) {
        word++;
    }
    printf("have %d words\nevery word have %.2f chars", word, 1.0*num/word);
}
