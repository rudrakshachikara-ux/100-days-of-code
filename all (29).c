#include <stdio.h>

int main() {
	// your code goes here
    int num;
    printf("Enter an integer");
    scanf("%d", &num);
    if (num %2==0) {
    pintf("%d is Even.\n" , num);
    }else {
    printf("%d is odd.\n" , num);
    }
    return 0;
}

