#include "main.h"
/**
 * Description: function that checks for lowercase character.
 * c is the char to be checked
 * returns 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return(1);
	}
	else 
	{
		return (0);
	}
}
