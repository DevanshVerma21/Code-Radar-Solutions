#include <stdio.h>
#include <math.h>

int main(){
    int number1,number2;
    int y = 2;
    scanf("%d %d",&number1,&number2);
    int result = pow(number2,y);
    if (number1 == result){
        printf("Yes");
    }
    else{
        printf("No");
    }
}