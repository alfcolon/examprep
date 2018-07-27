#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_rot_13(char *s)
{
	while (*s)
	{
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
			ft_putchar(*s + 13);
		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
			ft_putchar(*s - 13);
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
			ft_rot_13(argv[i]);
	else
		ft_putchar('\n');
	return (0);
}
