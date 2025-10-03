#include <stdio.h>

int main() {
	// your code goes here
    char str[100];
    int i, len;
    int isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for ( i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
    isPalindrome = 0;
    break;
    }
    }
    if (isPalindrome) {
    printf("\"%s\" is a palindrome.\n", str);
    } else {
    printf("\"%s\" is not a palindrome.\n", str);
    }
    return 0;
}



