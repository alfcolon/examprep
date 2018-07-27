#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void		ft_revprint(char *s)
{
	int	len;

	len = ft_strlen(s);
	while (len--)
		ft_putchar(s[len]);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int 	i;

	i = 0;
	if (argc != 1)
		while (++i < argc)
			ft_revprint(argv[i]);
	else
		ft_putchar('\n');
	return (0);
}
