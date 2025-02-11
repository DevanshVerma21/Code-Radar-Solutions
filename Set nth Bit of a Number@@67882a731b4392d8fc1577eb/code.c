#include <stdio.h>
int main(){
    int number,bit;
    scanf("%d %d",&number,&bit);
    int result = number | (1 << bit);
    printf("%d",result);




}


