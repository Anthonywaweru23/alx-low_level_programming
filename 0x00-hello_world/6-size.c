#include <stdio.h>

/**
 * main - this is the main function
 * Description :You should produce the exact same output as in the example
 * Warnings are allowed
 *
 * Return: 0 when sucessfull
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of a int: %lu byte(s)\n", sizeof(i));
	printf("size of a long: %lu byte(s)\n", sizeof(li));
	printf("size of a long long: %lu byte(s)\n", sizeof(lli));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
