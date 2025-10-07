#include <stdio.h>

int main() {
	// your code goes here
    void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
    }
}

// Function to reverse each word in a sentence
    void reverseWords(char* s) {
    char* word_begin = s;
    char* temp = s;

    while (*temp) {
    temp++;
        // If a space or null terminator is encountered, it marks the end of a word
    if (*temp == '\0') {
            reverse(word_begin, temp - 1); // Reverse the last word
    } else if (*temp == ' ') {
    reverse(word_begin, temp - 1); // Reverse the current word
    word_begin = temp + 1;         // Move to the beginning of the next word
    }
}
}
}

int main() {
    char sentence[] = "This is a test sentence";
    printf("Original sentence: %s\n", sentence);

    reverseWords(sentence);

    printf("Sentence with reversed words: %s\n", sentence);

    return 0;
}
