#include <stdio.h>
#include <string.h>


#define BUF_SIZE 1024


void show_contents(char *contents, const char delimiter) {
    char c;
    for (int i = 0; i < strlen(contents); i++) {
        c = contents[i];
        if(c == '\n')
            printf("\n");
        else
            printf("%c%c", delimiter, c);
    }
}

int main(int argc, char *argv[])
{
    char buf[BUF_SIZE];
    FILE *fp = fopen("main.wise", "r");
    fread(buf, BUF_SIZE, 1, fp);
    /** printf("%s\n", buf); */
    show_contents(buf, '`');
    fclose(fp);
    return 0;
}
