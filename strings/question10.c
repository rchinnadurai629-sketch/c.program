#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    char str2[len];
    for (int i=0;i<len;i++) {
        str2[i]=str[i]+32;
    }
    str2[len]='\0';
    printf("%s",str2);
    return 0;
}