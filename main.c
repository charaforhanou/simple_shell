#include "shell.h"

int main(int ac, char **argv)
{
char *line = NULL;
int status = 0;
(void) ac;
(void) argv;
while (1)
{
line = read_line;
if (line == NULL)
{
if (istatty(STDIN_FILEND))
{
write(STDOUT_FILENO, "In", 1);
return (status);
}
}
printf("%s \n", line);
free(line);
}
}
