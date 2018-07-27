#include <stdio.h>
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len++]){;}
	return (--len);
}
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
char	*ft_strrev(char *str)
{
	int	start = 0;
	int	len = ft_strlen(str);
	char	*ptr = (char *)malloc(sizeof((char) ptr) * len);
	char	temp;

	ft_strcpy(ptr,str);
	while (start <= --len)
	{
		temp = ptr[start];
		ptr[start] = ptr[len];
		ptr[len] = temp;
		start++;
	}
	printf("%s\n",ptr);
	return (ptr);
}
int	main(void)
{
	ft_strrev("uendwoqwnifm");
	return 0;
}
