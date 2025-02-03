#include <stdio.h>

int main() {
    int num;
    int lsb=1;
    scanf("%d",&num);
    int result = lsb & num; 
    printf("%d", result);
    return 0;
}