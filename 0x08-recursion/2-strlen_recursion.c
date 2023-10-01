#include <stdio.h>
#include <string.h>
/**
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else{
		s++;
		return _strlen_recursion(s + 1);
}
