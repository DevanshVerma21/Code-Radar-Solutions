#include <stdio.h>

int countleadingzeroes(unsigned int number){
    int count = 0;
    if (number==0){
        return sizeof(number)*8;
    }
    for (int i = sizeof(number)*8-1;i >= 0;i--){
        if ((number >> i)& 1){
            break;
        }
        count++;
    }
    return count;
}


int main() {
    unsigned int number;
    scanf("%d",&number);

    printf("%d",countleadingzeroes(number));
    return 0;
}