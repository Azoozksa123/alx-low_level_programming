#include <string.h>
#include "main.h"
/**
* *_strncat - This function appends the src string to the dest string.
* @dest: deppend the sting the string
* @src: it gonna appended from no where
* @n: is the number of how manyy string you want to appended
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
