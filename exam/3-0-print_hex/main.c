#include <unistd.h>
char	hex[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_atoi(char *str)
{
	int	result = 0, sign = 1;

	while((*str >= 9 && *str <= 13) || *str == 32)
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
	return (sign * result);
}
int	ft_printhex(int num)
{
	static int	cycle = 0;
	if (num > 0)
	{
		if (ft_printhex(num/16))
		{
			cycle++;
			ft_putchar(hex[num % 16]);
		}
		if (cycle == 0)
			ft_putchar(hex[num % 16]);
		return (1);
	}	
	return 0;
}
int	main(int argc, char **argv)
{		
	int	num = 0;
	
	if (argc == 2)
	{	
		num = ft_atoi(argv[1]);
		ft_printhex(num);
	}
	ft_putchar('\n');
	return (0);
}
