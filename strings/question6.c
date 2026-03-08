#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int count=0;
    for (int i=0;i<len-1;i++) {
        if (str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u') {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}