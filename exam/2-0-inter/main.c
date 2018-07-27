#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_lsearch(char needle, char *haystack)
{
	while(*haystack)
	{
		if (needle == *haystack)
			return 1;
		haystack++;
	}
	return (0);
}

char	*ft_strcpy(char *dst, char *src)
{
	int 	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}

int	ft_strlen(char *str)
{
	int	len = 0;
	while(str[len++]){;}
	return (len);
}

void 	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_lsearch(s1[i], s2))
		{
			ft_putchar(s1[i]);
			j = i;
			while (++j < len - 1)
			{
				if (s2[j] == s1[i])
					ptr[j] = '\0';
			}
		}
		i++;
	}
	write(1, "\n", 1);
}
int	main(void)
{
	ft_inter("padinton", "paqefwtdjetyiytjneytjoeyjnejeyj");
	ft_inter("ddf6vewg64f", "gtwthgdwthdwfteewhrtag6h4ffdhsd");
	return (0);
}
