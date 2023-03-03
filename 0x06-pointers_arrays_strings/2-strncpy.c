#include "main.h"
/**
 * _strncpy - copy n characters from src to dest
 * @dest: destination buffer
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: pointer to destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}