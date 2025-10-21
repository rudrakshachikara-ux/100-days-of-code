#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of numbers from 1 to n
    long long total_sum_up_to_n = (long long)n * (n + 1) / 2;

    // Calculate the potential pivot integer x
    double potential_x_double = sqrt(total_sum_up_to_n);

    // Check if potential_x_double is an integer
    if (potential_x_double == floor(potential_x_double)) {
        int x = (int)potential_x_double;
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}

