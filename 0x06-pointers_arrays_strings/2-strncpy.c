#include <string.h>
#include "main.h"
/**
* *_strncpy - This function copy the src string to the dest string.
* @dest: deppend the sting the string
* @src: it gonna appended from no where
* @n: is the number of how manyy string you want to appended
*Return: the pointer location of the string
*/
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
