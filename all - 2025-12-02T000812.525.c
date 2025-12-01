#include <stdio.h>
#include <string.h>
struct Point {
    int x;
    int y;
};
int areEqual(struct Point a, struct Point b) {
    return (a.x == b.x) && (a.y == b.y);
}
int main() {
    struct Point p1 = {10, 20};
    struct Point p2 = {10, 20};
    struct Point p3 = {15, 25};
    printf("p1 vs p2: %s\n", areEqual(p1, p2) ? "Identical" : "Different");
    printf("p1 vs p3: %s\n", areEqual(p1, p3) ? "Identical" : "Different");
    return 0;
}

