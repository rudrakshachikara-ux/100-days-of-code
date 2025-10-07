#include <stdio.h>

int main() {
	// your code goes here
    int areAnagrams(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
    return 0;
    }
    int count1[ASCII_SIZE] = {0};
    int count2[ASCII_SIZE] = {0};
    for (int i = 0; i < len; i++) {
    count1[(unsigned char)str1[i]]++;
    }
    for (int i = 0; i < len2; i++) {
    count2[(unsigned char)str2[i]]++;
    }
    for (int i = 0; i < ASCII_SIZE; i++) {
    if (count1[i] != count2[i]) {
    return 0;
    }
    }
    rteurn 1;
    }
    int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    char s3[] = "hello";
    char s4[] = "world";
    if (areAnagrams(s1, s2)) {
    printf("\"%s\" and \"%s\" are anagrams.\n", s1, s2);
    } else {
    printf("\"%s\" and \"%s\" are not anagrams.\n", s1, s2);
    }
    if (areAnagrams(s3, s4)) {
    printf("\"%s\" and \"%s\" are anagrams.\n", s3, s4);
    } else {
    printf("\"%s\" and \"%s\" are not anagrams.\n", s3, s4);
    }
    return 0;
}


