#include<stdio.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    char username[20];
    for (int i = 0; str[i]!='@'; i++) {
        username[i] = str[i];
    }
    printf("%s",username);
    return 0;
}