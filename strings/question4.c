#include<stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    char feed[len+1];
    int j=0;
    for (int i=len-2;i>=0;i--) {
        feed[j++]=str[i];
    }
    printf("%s",feed);
    return 0;
}