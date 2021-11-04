#include "3-calc.h"

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

int op_sub(int a, int b)
{
	int substract;

	substract = a - b;
	return (substract);
}

int op_mul(int a, int b)
{
	int multiply;

	multiply = a * b;
	return (multiply);
}

int op_div(int a, int b)
{
	int divide;

	divide = a / b;
	return (divide);
}

int op_mod(int a, int b)
{
	int module;

	module = a % b;
	return (module);
}
