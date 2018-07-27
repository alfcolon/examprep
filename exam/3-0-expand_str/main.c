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
int	ft_strlen(char* str)
{
	int	len = 0;
	while (str[len++]){;}
	return (--len);
}
void	ft_expand_str(char *str)
{
	int	len = ft_strlen(str);
	int	first_word;
	int	i = 0;
	
	first_word = 0;
	while (i < len)
	{
		while (i < len && ft_isspace(str[i]))
		{
			i++;
		}
		if (first_word)
		{
			write(1,"   ",3);
		}
		while (i < len && !(ft_isspace(str[i])))
		{
			ft_putchar(str[i]);
			i++;
		}
		first_word = 1;
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
			ft_expand_str(argv[i]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
