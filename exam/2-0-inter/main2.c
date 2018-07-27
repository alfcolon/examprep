#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = i;
		while (s2[j])
		{
			if (s2[j] == s1[i])
			{
				ft_putchar(s1[i]);
				i++;
				break;
			}
			j++;
		}
		i++;
	}
}			
