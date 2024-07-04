#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("../numbers.txt", "r");
    long int total = 0;
    int num;

    while (fscanf(file, "%d", &num) == 1) {
        total += num * num;
    }

    fclose(file);

    printf("%ld\n", total);

    return 0;
}
