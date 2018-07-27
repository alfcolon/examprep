#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_alpha_mirror(char *str)
{
	char mirror[2][26] = {"zyxwvutsrqponmlkjihgfedcba","ZYXWVUTSRQPONMLKJIHGFEBCBA"};
	while(*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar(mirror[0][*str - 97]);
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(mirror[1][*str - 65]);
		else
			ft_putchar(*str);
		str++;
	}
}
int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			ft_alpha_mirror(argv[i]);
			write(1,"\n",1);
		}
		return (0);
	}
	write(1, "\n", 1);
	return (0);
}
