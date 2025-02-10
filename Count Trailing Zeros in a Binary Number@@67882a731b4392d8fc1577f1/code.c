#include <stdio.h>

int counttrailingzeroes(int num){
    int count = 0;
    while ((num & 1)==0 && num != 0){
        count++;
        num>>=1;
    }
    return count;
}
int main() {
    int num;
    scanf("%d",&num);
    int result = counttrailingzeroes(num);
    printf("%d",result);
    
    return 0;
}