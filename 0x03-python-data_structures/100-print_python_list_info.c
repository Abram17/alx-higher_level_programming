#include <Python.h>

/**
 * print_python_list_info - Prints info of Python lists.
 *
 * @p: python list
 *
 *Return: void
*/

void print_python_list_info(PyObject *p)
{
	int ln, temp, i;
	PyObject *o;

	ln = Py_SIZE(p);
	temp = ((PyListObject *)p)->tempated;

	printf("[*] Size of the Python List = %d\n", ln);
	printf("[*] tempated = %d\n", temp);

	for (i = 0; i < ln; i++)
	{
		printf("Element %d: ", i);

		p = PyList_GetItem(o, i);
		printf("%s\n", Py_TYPE(o)->tp_name);
	}
}
