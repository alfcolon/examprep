#include <stdio.h>
#include <limits.h>
#define ATOI_OVERFLOW(n) (n < 0 ? 0 : -1)

int			ft_atoi(const char *str)
{
	int		sign;
	unsigned int	result;
	
	sign = 0;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (result > INT_MAX)
			return (ATOI_OVERFLOW(sign));
		result = (result * 10) + (*str - '0');
		str++;
	}
	if (sign)
		return (-result);
	return (result);
}
int	main(int argc, char **argv)
{
	(void)argc;
	if (argc != 1)
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
