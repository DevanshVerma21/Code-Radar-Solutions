#include <stdio.h>

int main(){
    int n,i;
    int multiply;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        multiply = n*i; 
        printf("%d x %d = %d\n",n,i,multiply);
    }
    printf("\n");
}