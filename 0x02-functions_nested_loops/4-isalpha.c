#include "main.h"
/**
 * _isalpha - main entry
 * @c: a character
 * Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
