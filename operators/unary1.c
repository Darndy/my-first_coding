#include <stdio.h>

/**
 * Main - using unary operator to return negative value
 *
 * Return - return (0) success
 */
int main(void)
{
	int x = 17, y = 22, z;

	z = x = (-y);
	printf("%d\n", z);

		return (0);
}
