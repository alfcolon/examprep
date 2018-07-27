#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
	{
		;
	}
	return (--len);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		write(1,argv[1],ft_strlen(argv[1]));
	write(1,"\n",1);
	return (0);
}	
