#include <ctype.h>
#include <stdio.h>
#include <string.h>

void srtCpy(char *src, char *dst){
    int len = strlen(src);
    for(int i = 0; i < len; ++i) {
        dst[i] = src[i];
    }
    dst[len] = '\0';
    printf("%s", dst);
}
int main() {
    char str[100];
    fgets(str, 100, stdin);
    char dst[100];
    srtCpy(&str[0],&dst[0]);
    return 0;
}