#include<stdio.h>
#include<stdlib.h>
/**
 * main - print _putchar
 *
 * Return: 0
 */
int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		putchar(word[i]);
	putchar('\n');

	return (0);
}
