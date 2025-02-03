#include <stdio.h>

int areacircle(){
    float n;
    scanf("%f",&n);
    float area = 3.14 * n;
    printf("Area: %.1f",area);


}
int main() {
    areacircle();
    return 0;
}