#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%.4f", &a );
    printf("You entered: %.4f", a);
    return 0;
}