#include <stdio.h>

int main() {
    int num,bit;
    scanf("%d %d",&num,&bit);
    int result = (num>>bit)&1;

    if (result==num){
        printf("%d",result);
    }

    return 0;
}