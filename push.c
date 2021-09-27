#include "monty.h"
/**
 * push - a function to add an element
 * @stack: a struct type stack_t
 * @line_number: of type int
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
stack_t *node;
char *num;

num = strtok(NULL, DELIMS);
if (num == NULL)
{
	printf("L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

node = malloc(sizeof(stack_t));
if (node == NULL)
{
	printf("Error: malloc failed\n");
	exit(EXIT_FAILURE);

}

node->n = atoi(num);
node->prev = NULL;
node->next = *stack;

if (*stack != NULL)
	(*stack)->prev = node;

*stack = node;
}
