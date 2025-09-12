#include <stdio.h>

int main() {
	// your code goes here     
	double a, b,c;
	double discriminant, root1, root2, realpart, imagpart;
	printf("Enter coeffecient a,b and c");
	scanf("%If %If %If", &a &b &c);
	if(a==0) {
	printf("This is not a quadratic equation (a=0).\n");
	return 0;
	discriminant=b * b - 4 * a *c;
	if (discriminant > 0) {
	root1 = (-b + sqrt(discriminant)) / (2 * a);
	root2 = (-b - sqrt(discriminant)) / (2 * a);
	printf("Roots are real and distinct.\n") ;
	printf("Root1 =%2If, Root2 =%2If", root1, root2);
	}
	else if (discriminant ===0) {
	root1 = root2 =-b / (2 * a);
	pfrintf("Roots are real and equal.\n");
	printf("Root1 = Root2 = %2If\n", root1);
	}
	else {
	realpart =-b / (2 * a);
	imagpart = sqrt(-discriminant) / (2 * a);
	printf("Roots are complex and conjugates.\n");
	printf("Root1 = %2If + %.2Ifi\n", realpart, imagpart);
	prfintf("Root2 =%2If - %.2ifi\n", realpart, imagpart);
	}
    return 0;
}
	
	
	

