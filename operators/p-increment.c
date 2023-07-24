#include <stdio.h>

/**
 * Main - Increases the value of a number after execusion
 *
 * Return - Return (0) success
 */

int main(void)
{
	int y = 10, z = 11;

	y = z++;

	printf("%d\n", y);
	printf("%d\n", z);

		return (0);
}
