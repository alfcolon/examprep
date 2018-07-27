#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	ft_do_op(int n1, int n2, char op)
{
	if (op == '+')
		printf("%d\n", (n1 + n2));
	else if (op == '-')
		printf("%d\n", (n1 - n2));
	else if (op == '*')
		printf("%d\n", (n1 * n2));
	else if (op == '/')
		printf("%d\n", (n1 / n2));
	else if (op == '%')
		printf("%d\n", (n1 % n2));
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_op((atoi(argv[1])), (atoi(argv[3])), *argv[2]);
	else
		printf("\n");
	return (0);
}

