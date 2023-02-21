#include <stdio.h>

/**
 * main - finds the sum of even-valued terms in the Fibonacci sequence
 *        that do not exceed 4,000,000
 *
 * Return: 0 on success
 */
int main(void)
{
int a = 1, b = 2, c, sum = 0;

while (b <= 4000000)
{
	if (b % 2 == 0)
	{        
sum += b;
}
	
c = a + b;
a = b;
b = c;
}

printf("%d\n", sum);

return (0);
}

