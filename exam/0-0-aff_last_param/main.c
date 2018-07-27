#include <unistd.h>

int	ft_strlen(char *str)
{ int	len = 0; while (str[len++]){;} return (--len);}

int	main(int argc, char **argv)
{
	if (argc > 1)
		write(1,argv[argc - 1],ft_strlen(argv[argc - 1]));
	write(1,"\n",1);
	return (0);
}
