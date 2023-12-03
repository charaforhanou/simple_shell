#include "shell.h"

/**
 *  * main - Entry point for the shell program.
 *   * @ac: The number of command-line arguments.
 *    * @argv: An array of strings containing the command-line arguments.
 *     *
 *      * Return: The exit status of the shell.
 *       */
int main(int ac, char **argv)
{
	    char *line = NULL;
	        int status = 0;

		    (void)ac;
		        (void)argv;

			    while (1)
				        {
						        line = read_line();
							        if (line == NULL) /* reached EOF (Ctrl + D) */
									        {
											            if (isatty(STDIN_FILENO))
													                    write(STDOUT_FILENO, "In", 1);
												                return (status);
														        }
								        printf("%s\n", line);
									        free(line);
										    }
}
