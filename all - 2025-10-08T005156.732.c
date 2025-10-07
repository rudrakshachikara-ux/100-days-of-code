#include <stdio.h>

int main() {
	// your code goes here
    char sentence[1000];
    char longestWord[100];
    int maxLength = 0;
    int currentLength = 0;
    int i = 0;
    int startOfWord = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;
    while (sentence[i] != '\0') {
    if (! isspace(sentence[i])) {
    currentLength++;
    } else {
    if (currentLength > maxLength) {
    maxLength = currentLength;
    strncpy(longestWord, sentence + startOfWord, maxLength);
    longestWord[maxLength] = '\0';
    }
    currentLength  = 0;
    startOfWord = i + 1;
    }
    i++;
    }
    if (currentLength > maxLength) {
    maxLength =  currentLength;
    strncpy(longestWord, sentence + startOfWord, maxLength);
    longestWord[maxLength] = '\0';
    }
    printf("Longest word: %s\n", longestWord);
    printf("Length: %d\n", maxLength);
    return 0;
}



