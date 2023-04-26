#include "main.h"
#include "convertors/convert_char.c"
#include "convertors/convert_str.c"
#include "convertors/convert_integer.c"
/**
* handler - function pointer to corresponding function
* @format: conversion specifier
* @ap: argument list
*
* Return: pointer to output string
*/
char *handler(char format, va_list ap)
{
int i;
char *output = NULL;
converter_t converter[] = {
{"c", convert_char},
{"s", convert_str},
{"d", convert_integer},
{"i", convert_integer},
{NULL, NULL}
};

for (i = 0; converter[i].specifier != NULL; i++)
{
if (*(converter[i].specifier) == format)
{
output = converter[i].convert(ap);
break;
}
}

return (output);
}
