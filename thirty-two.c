#include <stdio.h>

const size_t SIZE = 20;

int main(void)
{
    int value_count = 0;
    float fpl = 0.0;
    int i, j;
    i = j = 0;
    char word1[SIZE] = " ";
    char word2[SIZE] = " ";
    int byte_count = 0;
    //value_count = scanf("%f%d%d%[abcdefghi] %ld %s%n", &fpl, &i, &j, word1, word2,&byte_count);
    scanf("%d%d%[abc]", &i,&j,word1);
    printf("%d %d\t%s", i,j, word1);
}
