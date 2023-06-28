#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Thaoban Abdrasheed
 * Return: int
 */

int factorize(char *buffer)
{

	u_int32_t num;
	u_int32_t j;

	num = atoi(buffer);

	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			printf("%d=%d*%d\n",num,num/j,j);
			break;
		}
	}

return (0);
