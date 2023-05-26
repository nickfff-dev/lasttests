#include "main.h"
/**
 * split_string - splits a string into an array of words
 * @str: the string to split
 * Return: an array of words
 */
char **spltstr(char *str)
{
    int i, j, k, count = count_words(str);
    char **array = malloc(sizeof(char *) * (count + 1));

    if (array == NULL)
    {
        perror("Error");
        exit(1);
    }
    for (i = 0, j = 0; i < count; i++, j++)
    {
        while (str[j] == ' ')
            j++;
        array[i] = malloc(sizeof(char) * (get_word_length(str, j) + 1));
        if (array[i] == NULL)
        {
            perror("Error");
            exit(1);
        }
        for (k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
            array[i][k] = str[j];
        array[i][k] = '\0';
    }
    array[i] = NULL;
    return (array);
}