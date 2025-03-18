int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < strlen(ops))
	{
		if (strcmp(s, ops[i]) == 0)
		{
			return(ops[i]);
		}
	}
