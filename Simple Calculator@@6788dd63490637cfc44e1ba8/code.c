#include <stdio.h>

int main(){
    int num1,num2;
    char operand;
    scanf("%f %f %f",&num1,&num2,&operand);
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
        int divide = num1 / num2;
        printf("%d",divide);
        }

}