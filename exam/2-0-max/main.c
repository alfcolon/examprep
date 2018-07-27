#include <stdio.h>
int	max(int	*tab,	unsigned int len)
{
	int	max;
	int	i = 0;	
	if (len == 0)
		return 0;
	max = tab[0];
	while(++i < len)
	{
		if (max < tab[i])
			max = tab[i];
	}
	printf("%d\n",max);
	return max;
}
int	main()
{	
	int	tab[5]  = {54,200,76,2,91};
	max(tab, 5);
	return 0;
}
