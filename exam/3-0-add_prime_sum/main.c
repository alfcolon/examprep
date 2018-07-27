#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
void    ft_putchar(char c)
{
	write(1,&c,1);
}
void    ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}
char    *ft_fillsieve(char *sieve, int num)
{
	int     i = 0;
	while (i <= num)
	{
		sieve[i] = '1';
		i++;
	}
	return sieve;
}
void    ft_add_prime_sum(int num)
{
	int     prime = 2;
	int     j;
	int     prime_sum = 0;
	char *sieve = (char *)malloc(sizeof((char) sieve) * num + 1);

	ft_fillsieve(sieve, num);
	while (prime <= num)
	{
		if (sieve[prime] == '1')
		{
			prime_sum += prime;
			j = prime * prime;
			while (j <= num)
			{
				sieve[j] = '0';
				j += prime;
			}
		}
		prime++;
	}
	ft_putnbr(prime_sum);
}
int     ft_atoi(char *str)
{
	int     result = 0, sign = 1;
	while((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if (*str == '-' || *str == '+')
		if (*str == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (sign * result);
}
int     main(int argc, char **argv)
{
	int     num;
	
	if (argc != 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	num = ft_atoi(argv[1]); 
	if (num > 1) 
		ft_add_prime_sum(num);
	else if (num <= 1)
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
