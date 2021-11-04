#include "3-calc.h"

/**
 * main - call functions of operators
 * @argc: argument counts
 * @argv: argument value
 * Return: return 0
 */
int main(int argc, char **argv)
{
int number1, number2, result;
int (*calc)(int, int);
char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	get_op = argv[2];
	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{

		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(get_op);
	result = calc(number1, number2);

	printf("%d\n", result);
	return (0);
}
