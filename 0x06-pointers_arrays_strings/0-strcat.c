#include <string.h>
#include "main.h"
/**
* *_strcat - This function appends the src string to the dest string.
* @*dest: the string
* @src the return xD
* Return: the ip location of the string 
 */
char *_strcat(char *dest, char *src)
{
	
	size_t dest_len = strlen(dest);
    size_t i;

   for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];

    dest[dest_len + i] = '\0';

   return dest;
}
