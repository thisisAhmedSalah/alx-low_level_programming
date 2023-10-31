#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Create a character array of a given size filled with a given character.
 *
 * @param size The size of the character array to create.
 * @param c The character to fill the array with.
 * @return A pointer to the created character array, or NULL if an error occurred.
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *str;

    str = malloc(sizeof(char) * size);
    if (str == NULL || size == 0)
    {
        free(str);
        return NULL;
    }
    for (i = 0; i < size; i++)
    {
        str[i] = c;
    }
    return str;
}

