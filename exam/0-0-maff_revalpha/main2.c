#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_maff_revalpha(void)
{
	char	letter;

	letter = 'z' + 1;
	while (--letter >= 'a')
	{
		if (letter & 1)
			ft_putchar(letter - 32);
		else
			ft_putchar(letter);
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_maff_revalpha();
	return (0);
}
