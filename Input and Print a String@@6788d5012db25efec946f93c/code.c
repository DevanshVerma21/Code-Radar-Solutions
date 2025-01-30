#include <stdio.h>

int main() {
    char str[100];
    scanf("%99[^]",str);
    printf("You entered: %s",str);
    return 0;
}