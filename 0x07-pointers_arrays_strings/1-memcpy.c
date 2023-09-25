#include "main.h"
/**
* *_memcpy - This function copy the value of the address src.
* @*dest : the address of where we gonna change
* @src : the place that will copy 
* Return: the pointer location of the dest after changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (size_t i = 0; i < n; i++)
	{
		if (i < n)
		{
			*dest = *src;
			dest++;
			src++;
		}	
	}
	return (dest);
}
