#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>


/**
 * struct conversion - struct for conversion specifiers
 * @specifier: the conversion specifier
 * @convert: the function associated with conversion specifier
 */
typedef struct conversion
{
    char *specifier;
    char *(*convert)(va_list);
} converter_t;

int _printf(const char *format, ...);

/* Conversion Functions */
char *convert_char(va_list);
char *convert_str(va_list);
char *convert_integer(va_list);

/** Helper Functions*/
int _putchar(char c);
int _strlen(char *s);
int num_len(int n);
char *handler(char format, va_list ap);
int parser(const char *format, va_list ap);
void reverse_string(char *s);
char *handle_unknown(char format, va_list ap);

#endif
