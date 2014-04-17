bool copyFile(char *oldFile, char *newFile)
{
    FILE *fp, *newFp;
    if((fp = fopen(oldFile, "r")) == NULL) {
        printf("%s 不存在", oldFile);
        return false;
    }
    newFp = fopen(newFile, "w");

    char ch;
    while((ch=getc(fp)) != EOF) {
        putc(ch, newFp);
    }
    fclose(fp);
    fclose(newFp);
    return true;
}

bool appendFile(char *fromFile, char *toFile)
{
    FILE *fromFp, *toFp;
    if ((fromFp = fopen(fromFile, "r")) == NULL) {
        printf("%s 不存在", fromFile);
        return false;
    }

    const int length = 255;
    toFp = fopen(toFile, "a");
    while(!feof(fromFp)) {
        char str[length];
        int tmpLength = fread(str, sizeof(char), length, fromFp);
        if (ferror(fromFp)) {
            printf("fread error");
            return false;
        }
        //fprintf(stdout, "%d\t", tmpLength);
        fwrite(str, tmpLength, sizeof(char), toFp);
        if (ferror(toFp)) {
            printf("fwrite error");
            return false;
        }
    }

    fclose(toFp);
    fclose(fromFp);

    return true;
}
