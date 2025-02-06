#include <stdio.h>

int setlowestbit(int number){
    if (number == 0){
        return -1;
    }
    
    int lowestbit = number & -number;

    int position = 0;
    while (lowestbit>1){
        lowestbit >>= 1;
        position++;
    } 
    return position;
}

int main() {
    int number;
    scanf("%d",&number);
    int position = setlowestbit(number);
    printf("%d",position);
    return 0;
}

