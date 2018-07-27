#include <unistd.h>

void	ft_printrepeats(char c, int repeats)
{
	while (--repeats >= 0)
	{
		write(1, &c, 1);
	}
}
int	ft_repeat_alpha(char *str)
{
	int	i = 0;

	while (*str)
	{	
		if (*str >= 'a' && *str <= 'z')	
			ft_printrepeats(*str, *str - 96);
		else if (*str >= 'A' && *str <= 'Z') 		
			ft_printrepeats(*str, *str - 64);
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return 0;
}
int 	main(int argc, char **argv)
{
	int	i = 0;

	if (argc > 1)
	{
		while (++i < argc)
		{
			ft_repeat_alpha(argv[i]);
		}
	}
	write(1,"\n",1);
	return 0;
}			
