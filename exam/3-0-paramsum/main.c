#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_putnbr(int num)
{
	if (num >= 0 && num <= 9)
		ft_putchar(num + '0');
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
} 
int	main(int argc, char **argv)
{
	(void)argv;	
	if (argc == 1)
		ft_putchar('0');
	else
		ft_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}	
