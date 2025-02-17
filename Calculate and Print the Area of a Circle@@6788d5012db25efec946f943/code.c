#include <stdio.h>

int areacircle(){
    float n;
    const float pi = 3.14;
    scanf("%f",&n);
    printf("Area: %.2f",pi*n*n);
    return 0;


}
int main() {
    areacircle();
    return 0;
}