#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}
int	ft_isletter(char c)
{
	if (c >= 'a' && c <= 'z')	
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}
int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len++]){;}
	return (--len);
}
void	ft_rstr_capitalizer(char *str)
{
	int	i = 0;
	int	len = ft_strlen(str);
	while (i < len)
	{
		while(i < len && ft_isspace(str[i]))
		{
			ft_putchar(str[i]);
			i++;
		}
		while (i < len && !ft_isspace(str[i]))
		{
			if (ft_isspace(str[i + 1]) && str[i] >= 'a')	
				ft_putchar(str[i] - 32);	
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}
int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc > 1)
	{
		while (++i < argc)
		{
			ft_rstr_capitalizer(argv[i]);
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
	return (0);
}	
