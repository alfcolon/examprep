#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_aff_a(char *s)
{
	while (*s)
		if (*s++ == 'a')
			ft_putchar('a');
}

int	main(int argc, char **argv)
{
	if (argc != 1)
		ft_aff_a(argv[1]);
	ft_putchar('\n');
	return (0);
}
