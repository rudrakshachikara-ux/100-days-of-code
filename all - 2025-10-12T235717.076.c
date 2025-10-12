#include <stdio.h>

int main() {
	// your code goes here
    void reverseSubstring(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in a sentence
void reverseWordsInSentence(char *sentence) {
    char *word_start = sentence;
    char *temp = sentence; // Pointer to traverse the sentence

    while (*temp) {
        // If a space or null terminator is encountered, a word has ended
        if (*temp == ' ' || *temp == '\0') {
            reverseSubstring(word_start, temp - 1); // Reverse the current word
            word_start = temp + 1; // Move to the start of the next word
        }
        temp++;
    }
    // Handle the last word if the sentence doesn't end with a space
    reverseSubstring(word_start, temp - 1);
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the trailing newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Original sentence: %s\n", sentence);

    reverseWordsInSentence(sentence);

    printf("Sentence with reversed words: %s\n", sentence);

    return 0;
}
}

