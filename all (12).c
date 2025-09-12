#include <stdio.h>

int main() {
        // your code goes here
        int p,r,t,n=1;
        float CI;
        p=6;
        r=8;                                                                   
        t=4;
        printf("Enter the value of p\n");
        scanf("%d", &p);
        printf("Enter the value of r\n");
        scanf("%d", &r);
        printf("Enter the value of t\n");
        scanf("%d", &t);
        CI=p*pow((1+(float)r/100/n),n*t);
        printf("compound interest is %f", CI);
        return 0;
}