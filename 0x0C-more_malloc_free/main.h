#ifndef MAIN_H
#define MAIN_H

/**
 * Author: Kazzoouutt
 * Description: Header file containing prototypes of all functions
 * used in the more malloc tasks.
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsinged int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
