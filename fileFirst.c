#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file/fileLib.c"

int main(int argc, char *argv[])
{
    appendFile("fileFirst.c", "/www/web/fileFirst.bak");
    return 0;

    copyFile("fileFirst.c", "/www/web/fileFirst.bak");
    return 0;

    int ch;
    FILE *fp;
    long count = 0;
    if (argc != 2) {
        printf("Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if((fp = fopen(argv[1], "r")) == NULL) {
        printf("Can't open %s\n", argv[1]);
        exit(1);
    }
    while((ch = getc(fp)) != EOF) {
        putc(ch, stdout); //putchar(ch);
        count++;
    }
    fclose(fp);

    printf("File %s has %ld charcters\n", argv[1], count);

    return 0;
}


