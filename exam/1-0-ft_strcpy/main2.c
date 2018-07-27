void	*ft_strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++) != 0)
		;
	return (s1);
}
