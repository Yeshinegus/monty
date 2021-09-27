#include "monty.h"

stack_t **global_head;
/**
 * main - the root of the project
 * @argc: how many arguments were passed to a program
 * @argv: arguments vector
 *
 * Return: on success, always EXIT_SUCCESS
 * CODE SOURCE - Cu7ious from github
 */
int main(int argc, char *argv[])
{
	stack_t *head;
	if (argc != 2)
	{
	printf("USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
	head = NULL;
	global_head = &head;

	read_file(argv[1], &head);

/*	atexit(global_free); */

	exit(EXIT_SUCCESS);

}
