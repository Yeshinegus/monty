#include "monty.h"
/**
 * pint - prints the value at the top of the stack, followed by a new line.
 * @stack: struct type stack_t
 * @line_number: of type unsigned int
 *
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{

if (stack == NULL || *stack == NULL)
{
	printf("L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
