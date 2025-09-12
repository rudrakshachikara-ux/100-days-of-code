#include <stdio.h>

int main() {
	// your code goes here
     int l,b,Area,Perimeter;
     printf("Enter the value of length");
     scanf("%d", &l);
     printf("Enter the value of breadth");
     scanf("%d", &b);                                                           
     Area=l*b;
     Perimeter=2*(l+b);
     printf("Area %d", Area);
     printf("Perimeter %d", Perimeter);
     return 0;
}
     

