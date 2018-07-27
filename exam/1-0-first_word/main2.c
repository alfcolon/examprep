#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	ft_firstword(char *s)
{
	while (ft_isspace(*s))
		s++;
	while (!ft_isspace(*s))
		ft_putchar(*s++);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_firstword(argv[1]);
	ft_putchar('\n');
	return (0);
}
