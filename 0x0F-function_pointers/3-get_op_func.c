#include "calc.h"

int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i++ < 5)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f(num1, num2))
	}

return (NULL);
}
