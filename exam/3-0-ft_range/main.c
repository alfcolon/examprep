#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_range_sum(start,end)
{
	int	s,e;
	int	total = 0;
	s = start;
	e = end;
	if (e < s)
	{
		e = start;
		s = end;
	}
	while (s <= e)
	{
		total++;
		s++;
	}
	return (total);
}

int	*ft_range(int start, int end)
{
	int	*arr;
	int	i;
	int	j;
	int	total = ft_range_sum(start,end);
	
	arr = (int *)malloc(sizeof((int) arr) * total + 1);
	i = -1;
	while (++i < total)
	{
		if(start <= end)
			arr[i] = start++;
		else if(start >= end)
			arr[i] = start--;
		printf("%d ", arr[i]);
	}
	printf("\n");
	return (arr);
}
int	main(void)
{
	ft_range(1,3);
	ft_range(-1,2);
	ft_range(0,0);
	ft_range(0,-3);
	return (0);
}
