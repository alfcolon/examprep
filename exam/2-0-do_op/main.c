#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_do_op(char *opnd1, char *operator, char *opnd2)
{
	int	op1;
	int	op2;

	op1 = atoi(opnd1);
	op2 = atoi(opnd2);
	if (*operator == '+')
		printf("%d", op1 + op2);
	else if (*operator == '-')
		printf("%d", op1 - op2);
	else if (*operator == '%')
		printf("%d", op1 % op2);
	else if (*operator == '*')
		printf("%d", op1 * op2);
	else if (*operator == '/')
		printf("%d", op1 / op2);
}
int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_op(argv[1],argv[2],argv[3]);
	printf("\n");
	return (0);
}
