#include <stdio.h>

int isprime(int num){
    if (num<=1){
        return 0;
    }
    for (int i=2;i<num;i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number;
    scanf("%d",&number);

    if (isprime(number)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}