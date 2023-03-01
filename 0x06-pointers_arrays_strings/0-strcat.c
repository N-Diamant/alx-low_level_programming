/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
        int dest_len = 0, i;

        while (dest[dest_len])
                dest_len++;

        for (i = 0; src[i]; i++)
                dest[dest_len++] = src[i];

        dest[dest_len] = '\0';

        return dest;
}
