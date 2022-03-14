#include <stdio.h>

/**
 * main - program that prints in lowercase,
 * followed by a new line
 * Return: Always 0 if successful
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);

}
