#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alphamirror(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			ft_putchar(123 - (*s - 96));
		else if (*s >= 'A' && *s <= 'Z')
			ft_putchar(91 - (*s - 64));
		else
			ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 1)
		ft_alphamirror(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}

