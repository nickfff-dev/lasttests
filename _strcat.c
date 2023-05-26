#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
    int i;
    int j;

   for (i = 0; dest[i] != '\0'; i++)
    {
        ;                   
    }

    for (j = 0; src[j] != '\0'; j++)
    {
        dest[i + j] = src[j];
    }

    dest[i] = '\0';

    return (dest);
}
