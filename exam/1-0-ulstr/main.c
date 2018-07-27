#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_ulstr(char *str)
{
	char 	ulstr;
	int	i = 0;
	
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ulstr = str[i] - 32;
			ft_putchar(ulstr);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ulstr = str[i] + 32;
			ft_putchar(ulstr);
		}
		else
			ft_putchar(*str);
	i++;
	}
}
			
int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc > 1)
	{	
		while (++i < argc)
		{
			ft_ulstr(argv[i]);
			write(1,"\n",1);
		}
		return (0);
	}
	write(1,"\n",1);
	return (0);
}
