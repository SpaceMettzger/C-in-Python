#include <Python.h>

//
long int calculate_sum_of_squares(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    long int total = 0;
    int num;

    while (fscanf(file, "%d", &num) == 1) {
        total += num * num;
    }

    fclose(file);
    return total;
}

static PyObject* py_calculate_sum_of_squares(PyObject* self, PyObject* args) {
    const char* filename;

    if (!PyArg_ParseTuple(args, "s", &filename)) {
        return NULL;
    }

    long int result = calculate_sum_of_squares(filename);

    return PyLong_FromLong(result);
}

static PyMethodDef module_methods[] = {
    {"calculate_sum_of_squares", py_calculate_sum_of_squares, METH_VARARGS, "Calculate the sum of squares from a file."}
};

static struct PyModuleDef sum_of_squares_module = {
    PyModuleDef_HEAD_INIT,
    "sum_of_squares_c_api",
    NULL,
    -1,
    module_methods
};

PyMODINIT_FUNC PyInit_sum_of_squares_c_api(void) {
    return PyModule_Create(&sum_of_squares_module);
}
