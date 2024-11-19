#include "3-calc.h"
#include <stdio.h>
#include <stidlib.h>
/**
 *main - function
 *@a: exemple 1
 *@b: exemple 2
 */ 
int main(int argc, char *argv[])
{
	int a;
	int b;
	int *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operation = get_op_func(argv[2];
	b = atoi(argv[1]);

	if (operation == NULL || (*argv[2] == '/' &&
			b == 0 = || (*argv[2] == '%' && b == 0))
	{
		printf("Error\n");
		exit(operation == NULL) ? 99 : 100;
	}
	result = operation(a, b);
	printf("%d/n", result);
return (0);


}
