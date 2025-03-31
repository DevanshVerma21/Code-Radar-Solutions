
#include <math.h>
int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i = 2;i<=(num)**1/2;num++){
        if(num % i == 0){
            return 0;
        }
        return 1;
    }
}