#include "monty.h"
#include <stdlib.h>
/**
 * pop - pop out the top element of the stack
 * @stack: struct type stack_t
 * @line_number: type unsigned int
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
temp = *stack;

if (stack == NULL || *stack == NULL)
{
	printf("L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
*stack = (*stack)->next;

free(temp);

}
