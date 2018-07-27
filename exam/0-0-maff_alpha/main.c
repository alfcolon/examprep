#include <unistd.h>

int	main(void)
{
	char	l = 'a';
	char 	u;
	while (l <= 'z')
	{
		if (l % 2 == 1)
			write(1,&l,1);
		else if (l % 2 == 0)
		{
			u = l - 32;
			write(1,&u,1);
		}
		l++;
	}
	write (1,"\n",1);
	return (0);
}
