#include <unistd.h>

void	ft_rot_13(char *str)
{
	char 	rot;
	int	i = 0;
	while (str[i])
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M')) 
		{	
			rot = str[i] + 13;
			write(1,&rot,1);
		}
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
		{	
			rot = str[i] - 13;
			write(1,&rot,1);
		}
		else
			write(1,str,1);
		str++;
	}
	write(1,"\n",1);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc > 1)
	{
		while (++i < argc)
		{
			ft_rot_13(argv[i]);
		}
	}
	
	return (0);
}
