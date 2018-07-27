#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	
	while (*s)
		ft_putchar(*s++);
}

void	ft_aff_last_param(char *s)
{
	ft_putstr(s);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_aff_last_param(argv[argc - 1]);
	ft_putchar('\n');
	return (0);
}
