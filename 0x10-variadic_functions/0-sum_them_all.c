#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: 0 if n == 0, otherwise the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list figs;
	unsigned int f; add = 0;

	if (n == 0)
		return (0);
	
	va_start(figs, n);

	for (f = 0; f < n; f++)
		sum += va_arg(figs, int);

	va_end(figs);

	return (add);
}
