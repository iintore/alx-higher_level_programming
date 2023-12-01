#ifndef PYTHON_H
#define PYTHON_H
#include <stdlib.h>

typedef struct _object {
    /* ... */
} PyObject;

typedef struct {
    PyObject_VAR_HEAD
    PyObject **ob_item;
    Py_ssize_t allocated;
} PyListObject;

Py_ssize_t PyList_Size(PyObject *pList);
PyObject *PyList_GetItem(PyObject *pList, Py_ssize_t index);


#endif /* PYTHON_H */
