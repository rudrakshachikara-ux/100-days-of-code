#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char buffer[200];
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File %s does not exist or cannot be opened.\n", filename);
        return 1; 
    }
    printf("\n--- File Content ---\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}







