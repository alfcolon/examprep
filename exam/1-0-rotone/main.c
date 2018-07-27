#include <unistd.h>

void	ft_rotone(char *str)
{
	char	rot;
	int	i = 0;
	
	while(str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
		{
			rot = str[i] + 1;
			write(1, &rot, 1);
		}
		else if (str[i] == 'z')
			write(1, "a", 1);
		else if (str[i] == 'Z')
			write(1,"A",1);
		i++;
	}
	write(1,"\n",1);
}
int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc > 1)
	{
		while(++i < argc)
		{
			ft_rotone(argv[i]);
		}
	}
	return (0);
}
