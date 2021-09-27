#include "monty.h"
/**
 * globla_free - free allocated memories upon exit
 *
 * Return: void
 */
void global_free(void)
{
stack_t *to_free;
stacl_t *temp;

to_free = *global_head;
temp = NULL;

while (to_free)
{
	temp = to_free->next;
	free(to_free);
	to_free = temp;
}
}
