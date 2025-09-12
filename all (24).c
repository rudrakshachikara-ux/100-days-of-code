#include <stdio.h>

int main() {
	// your code goes here
    float a, cir, r, pi=3.14;
    printf("Enter the value of r:");
    scanf("%d", &r);
    a= pi * r * r;
    cir=2 * pi * r;
    printf("a %f\n", &a);
    printf("cir %f\n", &cir);
    return 0;
}

