#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int	ft_nbrlen(int nbr)
{
	int	count = nbr < 0 ?  0 : 1;
	
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return count;
}
char 	*ft_itoa(int n)
{
	char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};
	long	nbr = nbr < 0 ? n : n * -1;
	int	len = ft_nbrlen(nbr);
	char *ptr = (char *)malloc(sizeof((char) ptr) * len + 1);
	
	while(nbr > 0)
	{
		ptr[--len] = numbers[nbr%10];
		nbr /= 10;
	}	
	if (n < 0)
		ptr[0] = '-';
	printf("%s\n",ptr);
	return ptr;
}
int	main(void)
{
	ft_itoa(-2147483648);

	return (0);
}
