#include <stdio.h>
int main() {
    char ch;
    char s[99];
    char sen[99];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);   
    printf("%s",sen);    
    return 0;
}
