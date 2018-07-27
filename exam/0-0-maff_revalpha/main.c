#include <unistd.h>

int	main(void)
{
	char letter = 'z';
	char upper;

	while (letter >= 'a')
	{
		if (letter % 2 == 0)
			write(1,&letter,1);
		else
		{
			upper = letter - 32;
			write(1,&upper,1);
		}
		letter--;
	}
	write (1,"\n",1);
	return (0);
}
