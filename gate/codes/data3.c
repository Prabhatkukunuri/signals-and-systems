#include <stdio.h>
#include <math.h>
#include <complex.h> // Include complex.h for complex number support

#define N 10 // You can change the value of N as needed

double complex a_k(int k, double x[], int size) {
    double sum_real = 0.0;
    double sum_imag = 0.0;
    int n;

    for (n = 0; n < size; n++) {
        double angle = -2 * M_PI * k * n / N;
        sum_real += x[n] * cos(angle);
        sum_imag += x[n] * sin(angle);
    }

    return (sum_real + sum_imag * I) / N;
}

int main() {
    double x[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Sample input values for x[n]
    int k;
    FILE *fp;

    fp = fopen("data3.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (k = 0; k < N; k++) {
        double complex result = a_k(k, x, N);
        fprintf(fp, "%d %lf\n", k, creal(result)); // Extracting the real part of the result
    }

    fclose(fp);
    printf("Data written to file successfully.\n");
    return 0;
}
