#include <stdio.h>

int main(){
    float num1,num2;
    char operand;
    scanf("%f %f %c",&num1,&num2,&operand);
    if (operand == '+'){
        int add = num1 + num2;
        printf("%d",add);
    }
    else if (operand == '-'){
        int sub = num1 - num2;
        printf("%d",sub); 
    }
    else if (operand == '*'){
        int multiply = num1 * num2;
        printf("%d",multiply);
    }
    else if (operand == '/'){
        if (num2==0){
            printf("error");
        }
        else{
        int divide = num1 / num2;
        printf("%d",divide);
        }
        }

}