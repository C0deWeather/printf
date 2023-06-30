#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
typedef struct number
{
	int *array;
	int size;
	int sign;
} number;

int _printf(const char *format, ...);
int _putchar(char c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int i);
int print_last_digit(int c);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
int multiple(int m, int n);
int _strlen(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
void _puts_recursion(char *s);
int _strlen_recursion(char *s);
float factorial(int n);
int is_prime_helper(int n, int i);
int is_palindrome(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char **strtow(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_strncpy(char *dest, char *src, int n);
void *_calloc(unsigned int nmemb, unsigned int size);
float sum_series(int x, int n);
void print_all(const char * const format, ...);
void print_separator(char *format, int i);
int print_num(int n);
int hdv(int n);
int _puts(char *str);
number parse_num(int n);
int check_format(char c, va_list ap);

#endif

