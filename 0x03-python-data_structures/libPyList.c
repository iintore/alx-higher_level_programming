#include <Python.h>

void print_python_list_info(PyObject *pList) {
    Py_ssize_t size, i;
    PyObject *item;

    printf("[*] Size of the Python List = %ld\n", PyList_Size(pList));
    printf("[*] Allocated = %ld\n", ((PyListObject *)pList)->allocated);

    for (i = 0, size = PyList_Size(pList); i < size; ++i) {
        item = PyList_GetItem(pList, i);
        printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
    }
}
