#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ulstr(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			ft_putchar(*s - 32);
		else if (*s >= 'A' && *s <= 'Z')
			ft_putchar(*s + 32);
		else
			ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 1)
		while (++i < argc)
			ft_ulstr(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
