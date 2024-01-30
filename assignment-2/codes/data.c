#include <stdio.h>
#include <stdlib.h>

int main() 
{

    // Generate random values for a (first term) and d (common difference)
    int a = 5; // Random value between 0 and 9
    int d = 2; // Random value between 1 and 5

    int n = 10; // Number of terms

    FILE *file = fopen("arithmetic_progression_data.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file!\n");
        return 1;
    }

    for (int i = 0; i <= n; ++i) {
        int term = a + (i) * d;
        fprintf(file, "%d %d\n", i, term);
    }

    fclose(file);

    // Assume specific values for p, q, r, a, and d
    int p = 3;
    int q = 5;
    int r = 7;
    int x = 2;
    int y = 3;

    // Calculate the sum of the first p, q, and r terms of the arithmetic progression
    int sum_a = p * (2 * x + (p - 1) * y) / 2;
    int sum_b = q * (2 * x + (q - 1) * y) / 2;
    int sum_c = r * (2 * x + (r - 1) * y) / 2;

    // Verify the expression
    double expression_result = (1.0 * sum_a / p) * (q - r) + (1.0 * sum_b / q) * (r - p) + (1.0 * sum_c / r) * (p - q);

    printf("Assumed values:\n");
    printf("p: %d\nq: %d\nr: %d\n", p, q, r);
    printf("Sum of first %d terms:\na=%d\nb=%d\nc=%d\n", p, sum_a, sum_b, sum_c);
    printf("Expression result: %f\n", expression_result);

    return 0;
}
