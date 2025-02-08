#include <stdio.h>

int countleadingzeroes(unsigned int number){
    return __buitlin_clz(number);
}

int main() {
    unsigned int number;
    scanf("%d",&number);

    printf("%d",countleadingzeroes(number));
    return 0;
}