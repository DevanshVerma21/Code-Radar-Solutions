#include <stdio.h>
#include <math.h>

int main(){
    int number,square;
    scanf("%d %d",&number,&square);
    if (number == pow(square,2)){
        printf("Yes");
    }
    else{
        printf("No");
    }
}