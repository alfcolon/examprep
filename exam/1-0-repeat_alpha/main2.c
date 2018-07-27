#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_repeat(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 96);
	else if (c >= 'A' && c <= 'Z')
		return (c - 64);
	return (0);
}

void	ft_repeat_alpha(char *s)
{
	int	r;

	while (*s)
	{
		if ((r = ft_repeat(*s)))
			while (r--)
				ft_putchar(*s);
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
			ft_repeat_alpha(argv[i]);
	
	else
		ft_putchar('\n');
	return (0);
}
				 
