cdef extern from "stdio.h":
    ctypedef struct FILE
    FILE *fopen(const char *filename, const char *mode)
    int fclose(FILE *stream)
    int fscanf(FILE *stream, const char *format, ...)

def calculate_sum_of_squares(const char *filename):
    cdef FILE *file = fopen(filename, "r")
    cdef long total = 0
    cdef int num

    while fscanf(file, "%d", &num) == 1:
        total += num * num

    fclose(file)

    print(total)
