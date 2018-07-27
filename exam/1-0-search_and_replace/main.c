#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_search_and_replace(char *str, char replace, char new_letter)
{
	while(*str)
	{
		if (*str == replace)
			ft_putchar(new_letter);
		else
			ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		write(1,"\n",1);
	ft_search_and_replace(argv[1],*argv[2],*argv[3]);
	write(1,"\n",1);
	return (0);
}
