#include "monty.h"
/**
 * parse_command - command selector
 * @stack: pointer to head
 * @op: operation/command
 * @line_num: number of a line
 *
 * Return: void
 */
void parse_command(stack_t **stack, char *op, unsigned int line_num)
{
	int i;
	instruction_t ops[] = {
			{"push", push},
			{"pall", pall},
			{"pint", pint},
			{NULL, NULL}
	};

	for (i = 0; ops[i].opcode; i++)

		if (strcmp(op, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_num);
			return;
																			}
	
	if (strlen(op) != 0)
	{
		printf("L%u: unknown instruction %s\n", line_num, op);
		exit(EXIT_FAILURE);
	}
}
