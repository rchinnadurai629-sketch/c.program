#include <ctype.h>
#include <stdio.h>
#include <string.h>

int VowelCount(char str[]) {
    int len=strlen(str);
    char *p=str;
    int count=0;
    for (int i=0 ; i<len ; i++) {
        *(p+i)=tolower(str[i]);
        if (*(p+i) == 'a' || *(p+i) == 'e' || *(p+i) == 'i' || *(p+i) == 'o' || *(p+i) == 'u') count++;
    }
    return count;
}
int main() {
    char str[100];
    fgets(str, 100, stdin);
    int count=VowelCount(str);
    printf("%d", count);
    return 0;
}