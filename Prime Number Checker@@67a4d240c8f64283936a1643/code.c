int isPrime(int num){
    if (num<=1){
        return 0;
    }
    if(num ==2 || num ==3){
        return 1;
    }
    if (num % 2 ==0 || num % 3 == 0){
        return 0;
    }

    for(int i = 5; i*i <= num;i += 2){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}