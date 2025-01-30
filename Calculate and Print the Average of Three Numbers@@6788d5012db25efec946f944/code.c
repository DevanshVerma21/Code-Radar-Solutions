#include <stdio.h>


int main() {
    float a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    float avg = (a + b + c)/3;
    printf("Average: %.2f", avg);
    return 0;
}