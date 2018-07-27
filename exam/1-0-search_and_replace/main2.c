#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_search_and_replace(char *s, char find, char replace)
{
	while (*s)
	{
		if (*s == find)
			ft_putchar(replace);
		else
			ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_search_and_replace(argv[1], *argv[2], *argv[3]);
	else
		ft_putchar('\n');
	return (0);
}
