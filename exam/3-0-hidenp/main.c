#include <unistd.h>
int	ft_lsearch(char needle, char *haystack)
{
	while (*haystack)
	{
		if (*haystack == needle)
			return 1;
		haystack++;
	}
	return 0;
}
int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len++]){;}
	return (--len);
}
int	ft_hidenp(char *s1, char *s2)
{
	int	i = 0;
	int	j;
	int	len = ft_strlen(s2);
	
	while (i < len)
	{
		if (ft_lsearch(*s2, s1,))
		{
			j = ++i;
			while (j < len)
			{
				if(ft_lsearch_
			}
		}
	}
	return 0;
}
	return (1);
}
int	(int argc, char **argv)
{
	if (argc == 3)
		if (ft_hidename(argv[1],argv[2]))
			write(1,"1\n",2);
		else
			write(1,"0\n",2);
	return (0);
}	
