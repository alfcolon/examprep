#include <stdio.h>
#include <stdlib.h>

void	ft_findprimes(char sieve[1000000], int num)
{
	int	prime;
	
	prime = 2;
	while (++prime < num)
	{
		if (sieve[prime])
			if (num % prime)
				sieve[prime] = 0;
	}
}
void	ft_sieve(char sieve[1000000], int num)
{
	int	prime;
	int	i;

	prime = 1;
	while (++prime < num)
	{
		if (prime)
		{
			i = prime + prime;
			while (i < num)
			{
				sieve[i] = 0;
				i += prime;
			}
		}
	}
	printf("%s\n", sieve);
}
void	ft_memchr(char *s, char c, int num)
{
	int	i;

	i = -1;
	while (++i < num)
		s[i] = c;
}	
void	ft_fprime(char *n)
{
	char	sieve[1000000];
	int	factors[100];
	int	count;
	int	num;
	int	i;

	num = atoi((const char *)n);
	ft_memchr(sieve, 1, num);
	ft_sieve(sieve, num);
	ft_findprimes(sieve, num);
	
	count = 0;
	i = 2;
	while (++i < num)
	{
		if (sieve[i])
		{
			while (num % i == 0)
			{	
				factors[count] = i;
				printf("%d\n", factors[count]);
				count++;
				num /= i;
			}
		}
	}
}	

int	main(void)
{
	ft_fprime("225225");
	return (0);
}
