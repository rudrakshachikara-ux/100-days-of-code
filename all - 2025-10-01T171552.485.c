#include <stdio.h>

int main() {
	// your code goes here
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
    char ch = tolower(str[i]);
    if (isalpha(ch)) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    vowels++;
    } else {
    consonants++;
    }
    }
    i++;
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}





