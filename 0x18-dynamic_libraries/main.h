#ifndef MAIN_H
#define MAIN_H /* MAIN_H */

#include <stddef.h>
#include <unistd.h>

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest_ptr, char *src_ptr);
char *_strncat(char *dest_ptr, char *src_ptr, int n);
char *_strncpy(char *dest_ptr, char *src_ptr, int n);
int _strcmp(char *s1_ptr, char *s2_ptr);
char *_memset(char *str_ptr, char byte, unsigned int n);
char *_memcpy(char *dest_ptr, char *src_ptr, unsigned int n);
char *_strchr(char *str_ptr, char c);
unsigned int _strspn(char *str_ptr, char *accept);
char *_strpbrk(char *str_ptr, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */
