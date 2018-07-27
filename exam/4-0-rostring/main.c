#include <unistd.h>
int	first_word[3] = {0,0,0};
void	ft_putchar(char c)
{
	write(1,&c,1);
}
int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}
int	ft_wrdlen(char *str, int start, int strlen)
{
	int	len = 0;
	int	i = start;
	while (i < strlen && !ft_isspace(str[i]))
	{
		len++;
		i++;
	}
	return len;
}
void	ft_printwrd(char *str, int start, int wrdlen)
{
	int	wrdend = start + wrdlen;
	int	i = start;
	while (i < wrdend)
	{
		ft_putchar(str[i]);
		i++;
	}
}
int	ft_splen(char *str, int start, int strlen)
{
	int	len = 0;
	int	i = start;

	while (i < strlen && ft_isspace(str[i]))
	{
		len++;
		i++;
	}
	return len;
}
int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len++]){;}
	return (--len);
}
void	ft_rostring(char *str)
{
	int	strlen = ft_strlen(str);
	int	wrdlen;
	int	splen;
	int	second_word = 0;
	int	i = 0;

	while (i < strlen)
	{
		if (!ft_isspace(str[i]))
		{
			wrdlen = ft_wrdlen(str, i, strlen);
			if (first_word[0] == 0)
			{
				first_word[0] = 1;
				first_word[1] = i;
				first_word[2] = wrdlen;
			}
			else 
			{
				second_word = 1;
				ft_printwrd(str, i, wrdlen);
			}
			i += wrdlen;
		}
		else
		{
			splen = ft_splen(str, i, strlen);
			if (splen > 1)
				i += splen;
			else 
				i++;
			if (second_word == 1)
				ft_putchar(' ');
		}
	}
	if (second_word == 1)
	{
		ft_putchar(' ');
		ft_printwrd(str,first_word[1],first_word[2]);
	}
	else	
		ft_printwrd(str,first_word[1],first_word[2]);
}
		
int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}	
