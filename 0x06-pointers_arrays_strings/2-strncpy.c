#include "main.h"
/**
 * _strncpy - function that copies a string, including the
 * terminating null byte, using at most an inputted number of bytes.
 * If the length of the source string is less than the maimum byte number,
 * the remainder of the destination string is filled with null bytes.
 * Works identically to the standard library function 'strncpy'
 *@dest: buffer storing the string copy
 *@src:the source string
 *@n:max number of byte copied
 *Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
