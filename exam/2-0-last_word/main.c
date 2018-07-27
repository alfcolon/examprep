int     ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}
int     ft_strlen(char *str)
{
	int     len = 0;
	while (str[len++]){;}
	return (--len);
}
void    ft_last_word(char *str)
{
	int     start,end,len;
	len = ft_strlen(str);

	while (ft_isspace(str[--len])){;}
	end = len;
	while(len >= 0 && !ft_isspace(str[--len])){;}
	start = ++len;
	while(start <= end)
	{
		start++;
	}
}
int main()
{
	ft_last_word("FOR PONY");
	ft_last_word("this        ...       is sparta, then again, maybe    not");
	ft_last_word("gaga       ");
}
