#include "main.h"
/**
* *_memset - This function replace the value of the address S.
* @*s : the address of s to be changed
* @b : the return xDsss s s
* Return: the pointer location of the string
*/
char *_memset(char *s, char b, unsigned int n)
{
	for (size_t i = 0; i < n; i++)
	{
		if (i < n)
		{
			*s = b;
			s++;
		}	
	}
	return (s);
}