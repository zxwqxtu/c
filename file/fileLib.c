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
