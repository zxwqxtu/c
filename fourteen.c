#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TEXTLEN 1000
#define BUFFERSIZE 100

int main(void)
{
    char text[TEXTLEN];
    char buffer[BUFFERSIZE];    
    char endStr[] = "*\n";
    printf("%d\n",(int) strlen("ab"));
    printf("Enter text on an arbitrary number of lines.");
    printf("\nEnter a line containing just an asterisk to end input:\n\n");
    while(true) {
        if (!strcmp(fgets(buffer, BUFFERSIZE, stdin), endStr)) {
            break;
        }
        if (strlen(text)+strlen(buffer)+1>TEXTLEN) {
            printf("Maximum capacity for text exceeded.Termainating program.");
            return 1;
        }
        strcat(text, buffer);
    }
    char words[255][100];
    char ch[1];
    int n = 0;
    for(int i=0;i<strlen(text);i++) {
        if (isalnum(text[i])) {
            //ch[0] = text[i];
            //strcat(words[n], ch);
            words[n][strlen(words[n])] = text[i];
        } else {
            n++;
        }
    }
    for (int i=0;i<n;i++) {
        printf("%s\t", words[i]);
    }
    return 0;
}
