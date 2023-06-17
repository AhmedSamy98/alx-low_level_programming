#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 3. alphABET
 * Return: 0
*/
int main(void)
{
	char ch = 'A';
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		ch++;
	}
	putchar('\n');

	return (0);
}
