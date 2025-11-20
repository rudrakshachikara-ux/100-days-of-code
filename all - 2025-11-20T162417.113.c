#include <stdio.h>
enum Status {
    PENDING,
    IN_PROGRESS, 
    COMPLETED = 5,
    FAILED  
};
int main() {
    printf("PENDING = %d\n", PENDING);
    printf("IN_PROGRESS = %d\n", IN_PROGRESS);
    printf("COMPLETED = %d\n", COMPLETED);
    printf("FAILED = %d\n", FAILED);
    return 0;
}




