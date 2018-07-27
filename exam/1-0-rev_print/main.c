#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len++]){;}
	return (--len);
}
void	ft_rev_print(char *str)
{
	int	len = ft_strlen(str);
	
	while (--len >= 0)
	{
		write(1,&str[len],1);
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
			ft_rev_print(argv[i]);
		}
	}
	return (0);
}
