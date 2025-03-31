#include <math.h>

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i = 2;i <= sqrt(num);num++){
        if(num % i == 0){
            return 0;
        }
        return 1;
    }
}