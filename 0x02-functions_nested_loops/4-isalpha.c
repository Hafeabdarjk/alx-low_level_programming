#include "main.h"

/**
 * _isalpha - checks for lower case letter
 * @c : the character to be checked
 * Return:true  or false
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
