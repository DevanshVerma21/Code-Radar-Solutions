#include <stdio.h>

int main() {
    char str[100];
    scanf("%99[^\n]",str);
    printf("You entered: %s",str);
    return 0;
}