#include "main.h"
/**
* *_memcpy - This function copy the value of the address src.
* @*s : the address of where we gonna change
* @c : the place that will copy 
* Return: the pointer location of the dest after changed
*/
char *_strchr(char *s, char c)
{
	int n = sizeof(s);

	for (size_t i = 0; i < n; i++)
	{
		if (*s == c )
			return (s);
		else 
		s++;	
	}
}