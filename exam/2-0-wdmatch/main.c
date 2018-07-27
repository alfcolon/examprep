#include <unistd.h>
#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str++);
	}
}
int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len++]){;}
	return (--len);
}
int	ft_wdmatch(char *s1, char *s2)
{
	int	len_s1 = ft_strlen(s1);
	int	len_s2 = ft_strlen(s2);
	int	i = -1;
	int	j;
	int	matched_j = 0;
	int	count = 0;
	
	while(s1[++i])
	{
		j = matched_j;
		while (++j < len_s2)//iterate through s1. If s1 letter is found in s2, set the new j start index to index of matched letter. Increase count by 1. If count equals the len of s1, return 1;
		{
			if (s2[j] == s1[i])
			{
				count++;
				matched_j = j;
				if (count == len_s1)
					return (1);
				break;
			}
		}
	}
	return 0;
}
int	main(int argc, char **argv)
{
	if (argc == 3)
		if (ft_wdmatch(argv[1], argv[2]))
			ft_putstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
// printf(count:"%d	len_s1:%d\n", count, len_s1);

	
