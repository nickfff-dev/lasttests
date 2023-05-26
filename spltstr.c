#include "main.h"
/**
 * split_string - splits a string into an lstn of words
 * @str: the string to split
 * Return: an lstn of words
 */
char **spltstr(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int count = 0;
    char **lstn = NULL;
    
    if (str == NULL || *str == '\0')
    {
        return (NULL);
    }
    count = count_words(str);
    lstn = (char **)malloc(sizeof(char *) * (count + 1));       
    if (lstn == NULL)
    {      
         free(lstn);
         return (NULL);
    }
    for (i = 0, j = 0; i < count; i++, j++)
    {
        while (str[j] == ' ')
         {   
                j++;
         }
        lstn[i] = (char *)malloc(sizeof(char) * (get_word_length(str, j) + 1));
        if (lstn[i] == NULL)
        {
            for (l = 0; l < i; l++)
            {
                free(lstn[l]);
            }
            free(lstn);
            return (NULL);   
        }
        for (k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
           { 
                lstn[i][k] = str[j];
           }
        lstn[i][k] = '\0';
    }
    lstn[i] = NULL;
    return (lstn);
}