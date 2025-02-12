#include <stdio.h>
#include <math.h>

int main(){
    int number,square;
    scanf("%d %d",&number,&square);
    if (number == square*square){
        printf("Yes");
    }
    else{
        printf("No");
    }
}