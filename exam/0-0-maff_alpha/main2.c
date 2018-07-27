#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_maff_alpha(void)
{
	char 	letter;
	
	letter = 'a' - 1;
	while (++letter <= 'z')
	{		
		if (!(letter & 1))
			ft_putchar(letter - 32);
		
		else
			ft_putchar(letter);
	}
	ft_putchar('\n');
}
 
int	main(void)
{
	ft_maff_alpha();
	return (0);
}
