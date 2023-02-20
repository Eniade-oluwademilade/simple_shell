#include "shell.h"
/**
 * _strcpy - copies a string
 * @str: string to copy
 *
 * Return: copy of string.
 */
char *_strcpy(char *str, char *cpy)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                str[i] = cpy[i];
                str++;
                cpy++;
        }
        *cpy = '\0';

        return (cpy);
}
~
