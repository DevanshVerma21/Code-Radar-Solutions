#include <stdio.h>

int main() {
    char str1[100],str2[100];
    // char str3[]=" and ";
    scanf("%99[^\n] %99[^\n]",&str1,&str2);
    printf("%s",str1, "%s and","%s",str2);
    return 0;
}