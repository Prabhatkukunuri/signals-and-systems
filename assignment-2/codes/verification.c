#include <stdio.h>

int main() {
    // Assume specific values for p, q, r, a, and d
    int p = 3;
    int q = 5;
    int r = 7;
    int a = 2;
    int d = 3;

    // Calculate the sum of the first p, q, and r terms of the arithmetic progression
    int sum_a = p * (2 * a + (p - 1) * d) / 2;
    int sum_b = q * (2 * a + (q - 1) * d) / 2;
    int sum_c = r * (2 * a + (r - 1) * d) / 2;

    // Verify the expression
    double expression_result = (1.0 * sum_a / p) * (q - r) + (1.0 * sum_b / q) * (r - p) + (1.0 * sum_c / r) * (p - q);

    printf("Assumed values:\n");
    printf("p: %d\nq: %d\nr: %d\n", p, q, r);
    printf("Sum of first %d terms:\na=%d\nb=%d\nc=%d\n", p, sum_a, sum_b, sum_c);
    printf("Expression result: %f\n", expression_result);

    return 0;
}
