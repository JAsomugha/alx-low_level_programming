#include "main.h"
/**
 *_isalpha - checks for alphabets
 *@c: Character to be checked
 *Return: 1 if chacracter is an alphabet else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
