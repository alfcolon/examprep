#include <unistd.h>
int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	
	result = 0;	
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if (*str == '-' || *str == '+')
		if (*str == '-')
			sign = -1;
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}
