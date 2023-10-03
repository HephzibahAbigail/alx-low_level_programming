#include <stdio.h>

/**
 * main - prints # of args
 * @argc: int
 * @argv: char*
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
