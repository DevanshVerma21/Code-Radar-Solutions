#include <stdio.h>

int main() {
    int num,bit;
    scanf("%d %d",&num,&bit);
    int result = (num>>bit)&1;
    if (result==bit){
        printf("%d",bit);
    }
    

    return 0;
}