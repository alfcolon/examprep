#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *s)
{
	while (*s)
	{
		if (*s == 'z')
			ft_putchar('a');
		else if (*s == 'Z')
			ft_putchar('A');
		else if ((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s <= 'Y'))
			ft_putchar(*s + 1);
		else
			ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc != 1)
		while (++i < argc)
			ft_rotone(argv[i]);
	else
		ft_putchar('\n');
	return (0);
}

