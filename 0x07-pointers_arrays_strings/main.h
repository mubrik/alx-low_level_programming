#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *str_ptr, char byte, unsigned int n);
char *_memcpy(char *dest_ptr, char *src_ptr, unsigned int n);
char *_strchr(char *str_ptr, char c);
unsigned int _strspn(char *str_ptr, char *accept);
char *_strpbrk(char *str_ptr, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*str_ptr)[8]);
void print_diagsums(int *arr_ptr, int size);

#endif /* MAIN_H */
