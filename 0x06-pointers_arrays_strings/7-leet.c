/**
 * leet - encodes a string into 1337
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
    int i, j;
    char letter[] = "aeotl";
    char digit[] = "43071";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; letter[j] != '\0'; j++)
        {
            if (str[i] == letter[j] || str[i] == letter[j] - 32)
            {
                str[i] = digit[j];
            }
        }
    }

    return str;
}
