#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * Author: Kazzoouutt
 * About - Header file containing all the prototype function
 * used for completing the pointers to functions tasks.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif

