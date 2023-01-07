#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - If is uppercase return 1, if not return 0
 *
 *  @c: this is the entry
 *
 *  Return: 0
 *
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======

* _isupper - checks for uppercase character

* @letter: the chracter to be tracked

* Return: 1 if c is uppercase, 0 otherwise

*

*/



int _isupper(int letter)



{



return (letter >= 'A' && letter <= 'Z');



>>>>>>> 32b5f7e630d7b7f22130d936c07dfaec52188eed
}
