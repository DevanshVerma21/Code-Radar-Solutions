#include <stdio.h>

int main() {
    int number,bit;
    scanf("%d %d",&number,&bit);
    int mask = 1<<bit;
    int result = number ^ mask;
    printf("%d",result);
    return 0;
}