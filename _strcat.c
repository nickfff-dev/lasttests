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
    int i = 0;
    int j = 0;

    for (i = 0; dest[i] != '\0'; i++)
    {
        i++;
    }

    for (j = 0; src[j] != '\0'; j++)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest);
}
