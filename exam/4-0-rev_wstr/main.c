#include <stdio.h>
#include <unistd.h>
void    ft_putchar(char c)
{
	write(1,&c,1);
}
int     ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}
int     ft_wordlen(char *str, int wrdstart, int strlen)
{
	int     len = 0;
	int     i = wrdstart;
	while (i < strlen && !ft_isspace(str[i++]))
	{
		len++;
	}
	return (len);
}
void    ft_revprintword(char *str, int i, int wrdlen)
{
	int 	wrdend = i + wrdlen;
	while (--wrdend >= i)
	{
		ft_putchar(str[wrdend]);
	}
}
int     ft_strlen(char *str)
{
	int     len = 0;
	while (str[len++]){;}
	return (--len);
}
void    ft_rev_wstr(char *str)//iterate through str. If char is not a space char, print word in reverse, move i to the next position after word. Continue loop till end.
{
	int     i = 0;
	int     len = ft_strlen(str);
	int 	wrdlen;

	while (i < len)
	{
		if (ft_isspace(str[i]))
			ft_putchar(str[i++]);
		else if (!ft_isspace(str[i]))
		{
			wrdlen = ft_wordlen(str,i,len);
			ft_revprintword(str,i,wrdlen);
			i += wrdlen;
		}
		else
			i++;
	}
}
int     main(int argc, char **argv)
{
	printf("%s\n", argv[1]);
	if (argc == 2)
		ft_rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
