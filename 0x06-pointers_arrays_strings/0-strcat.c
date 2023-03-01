#include "main.h"
/**
*_strcat - a funtion that concatinates strings
*@dest:the destination string
*@src:the source string
*Return: Nothing
*/

void char *_strcat(char *dest, char *src){
    int i;

    int j = strlen(s);
    for (i=0;src[i] != '\0';i++){
        dest[i+j] = src[i];
    }
    dest[i+j] = '\0';
    return;
}

