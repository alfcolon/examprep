#include <unistd.h>

void	ft_aff(char letter, char *str)
{
	while (*str)
	{
		if (*str == 'a')
		{
			write (1, "a", 1);
			break;
		}
		str++;
	}
	write(1,"\n",1);
}
	
int	main(int argc, char **argv)
{
	if (argc == 1 || argc > 2)
		write(1, "a\n", 2);
	else
		ft_aff('a', argv[1]);
	return (0);
}
