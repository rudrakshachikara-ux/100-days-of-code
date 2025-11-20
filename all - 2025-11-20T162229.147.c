
#include <stdio.h>
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    COLOR_COUNT // Helps determine the number of enum values
};
const char* colorNames[] = {
    "RED",
    "GREEN",
    "BLUE",
    "YELLOW"
};
int main() {
    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("Enum name: %s, Value: %d\n", colorNames[i], i);
    }
    return 0;
}




