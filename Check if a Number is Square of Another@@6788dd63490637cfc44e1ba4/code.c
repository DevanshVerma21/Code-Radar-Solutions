#include <stdio.h>
#include <math.h>

int main(){
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    if (number1 == pow(number2,2)){
        printf("Yes");
    }
    else{
        printf("No");
    }
}