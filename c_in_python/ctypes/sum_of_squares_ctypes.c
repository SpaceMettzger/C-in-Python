#include <stdio.h>
#include <stdlib.h>

long int calculate_sum_of_squares(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    long int total = 0;
    int num = 0;

    while (fscanf(file, "%d", &num) == 1) {
        total += num * num;
    }

    fclose(file);
    return total;
}
