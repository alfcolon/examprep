#include <stdio.h>
#include <stdlib.h>
char	*ft_strcpy(char *dst, char *src)
{
	int	i = 0;
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
	return len;
}
char	*ft_strdup(char *src)
{
	int	len = ft_strlen(src);
	char	*dupe = (char *)malloc(sizeof((char) dupe) * len);
	ft_strcpy(dupe,src);
	printf("%s\n",dupe);
	return src;
}
int	main(void)
{
	ft_strdup("Hello World!");
	return 0;
}
