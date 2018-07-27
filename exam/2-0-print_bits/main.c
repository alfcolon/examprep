#include <stdio.h>

void	ft_print_bits(unsigned char octet)
{
	int	oct = 8;
	char	bits[98] = {'0','0','0','0','0','0','0','0','\0'};
	while (oct > 0)
	{
		bits[oct] = (octet % 2) + '0';
		octet /= 2;
		oct--;
	}
	printf("%s\n", bits);
}
int	main()
{
	ft_print_bits('\0' + 1);
	ft_print_bits('A');
	return (0);
}	
