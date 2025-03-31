#include <math.h>

int isPrime(int num){
    float sqrt = num**1/2;
    if(num<=1){
        return 0;
    }
    for(int i = 2;i<=sqrt;num++){
        if(num % i == 0){
            return 0;
        }
        return 1;
    }
}