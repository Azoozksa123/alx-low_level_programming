#include <string.h>
#include "main.h"
/**
* *_strcat - This function appends the src string to the dest string.
* @dest: deppend the sting the string
* @src the return xDsss
* n is the number
*Return: the pointer location of the string
*/
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
