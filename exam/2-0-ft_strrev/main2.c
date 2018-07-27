#include <stdio.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char		*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	len = ft_strlen(str);
	i = -1;
	while (++i < --len)
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
	}
	printf("%s\n", str);
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_strrev(argv[1]);
	return (0);
}
