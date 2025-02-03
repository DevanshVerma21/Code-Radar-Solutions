#include <stdio.h>

int areacircle(){
    float n;
    float pi = 3.14;
    scanf("%f",&n);
    float area = pi * n * n;
    printf("Area: %.2f",area);


}
int main() {
    areacircle();
    return 0;
}