#include <unistd.h>
void	ft_firstword(char *str)
{
	while(*str)
	{
		if (*str == '\t' || *str == ' ' || *str == '\0')
			break;	
		write(1,str,1);
		str++;
	}
}
int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_firstword(argv[1]);
	write(1,"\n",1);
	return (0);
}
