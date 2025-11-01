#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

int longestUniqueSubstringLength(char *s) {
    int n = strlen(s);
    int maxLen = 0;
    int start = 0;
    int lastIndex[MAX_CHAR];
    for (int i = 0; i < MAX_CHAR; i++) {
        lastIndex[i] = -1;
    }
    for (int end = 0; end < n; end++) {
        char currentChar = s[end];
        if (lastIndex[(int)currentChar] >= start) {
            start = lastIndex[(int)currentChar] + 1;
        }
        lastIndex[(int)currentChar] = end;
        int currentLen = end - start + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}

int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf("%s", s);

    int result = longestUniqueSubstringLength(s);
    printf("Length of longest substring without repeating characters: %d\n", result);

    return 0;
}


