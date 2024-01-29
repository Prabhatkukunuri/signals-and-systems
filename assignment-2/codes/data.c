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

    return 0;
}
