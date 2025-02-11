#include <stdio.h>
int main(){
    int number,bit;
    scanf("%d %d",&number,&bit);
    int result = (number >> bit) & 1;
    printf("%d",result);




}


