#include <stdio.h>
#include <string.h>

void Concat(char *str1, char *str2, char *constr) {
    int i=0;
    for (int j=0; j<strlen(str1)-2; j++) {
        *(constr+(i++))=*(str1+j);
    }
    for (int j=0; j<strlen(str2); j++) {
        *(constr+(i++))=*(str2+j);
    }
    *(constr+i)='\0';
    printf("%s", constr);
}
int main() {
    char str1[50];
    fgets(str1, 50, stdin);
    char str2[50];
    fgets(str2, 50, stdin);
    char str[100];
    Concat(&str1[0], &str2[0], &str[0]);
}