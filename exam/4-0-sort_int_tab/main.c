int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len++]){;}
	return (--len);
}
int	ft_strcmp(char *s1, char *s2)
{
	int	s1_len = ft_strlen(s1);
	int	s2_len = ft_strlen(s2);
	
	while (s1 < s1_len && s2 < s2_len)
	{
		if (s1[s1_len] != s2[s2_len])
			return s1[s1_len] - s2[s2_len];
		s1_len++;
		s2_len++;
	}
	return 0;
}
void	sort_int_tab(int *tab, unsigned int size)
{
	int	*tab_posx = (int *)malloc(sizeof((int)tab_posx) * size + 1);
	int	sorted = 0;
	int	temp;
	int	i;
	int	t = 0;
	while (t < size)
	{
		tab_posx[t] = t;
		t++;
	}
	while (!sorted)
	{
		i = 0;
		while (i < size)
		{
			j = ++i;
			while (j < size && ft_strcmp(tab[tab_posx[i]],tab[tab_posx[j]]) > 0)
			{
				temp = tab_posx[i];
				tab_posx[i] = tab_posx[j];
				tab_posx[j] = temp;
				j++;
			}
			i++;
		}
		if (ft_sorted(tab))
			sorted = 1;
		else
			sorted = 0;
	}
	ft_printlist(tab_posx, tab);
}

			
		
		
				
				
			
		
		
