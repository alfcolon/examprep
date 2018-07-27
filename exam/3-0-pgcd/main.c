#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int num)
{
	if (num >= 0 && num <= 9)
		ft_putchar(num + '0');
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}
int	ft_atoi(char *str)
{
	int	result = 0, sign = 1;
	
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{	
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}
int	ft_pgcd(char *num1, char *num2)
{
	int	n1 = ft_atoi(num1);
	int	n2 = ft_atoi(num2);
	int	denominator;
	
	denominator = (n1 < n2) ? n1 : n2;
	while (denominator > 0)
	{
		if (n1 % denominator == 0)
			if (n2 % denominator == 0)
			{
				ft_putnbr(denominator);
				return (1);
			}
		denominator--;
	}
	return (0);
}
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_pgcd(argv[1],argv[2]);
	ft_putchar('\n');
	return (0);
}
