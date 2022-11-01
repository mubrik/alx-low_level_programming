#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

void *malloc_checked(unsigned int bufr_size);
char *string_nconcat(char *str1, char *str2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */
