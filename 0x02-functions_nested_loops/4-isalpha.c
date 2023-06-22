#include "main.h"

/**
* _isalpha - Checks if a character is alphabetic.
*
* Return: 1 if character is letter, lowercase or uppercase.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
