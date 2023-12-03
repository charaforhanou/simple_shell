#include "shell.h"
char **takenizer(char *line)
{
char *taken = NULL , *tmp= NULL;
char **command = NULL;
int cpt = 0, i = 0;

if (line)
return(NULL)
tmp = strdup(line);
taken = strtok(tmp,DELIM);
if (taken== NULL)
{
free(tmp);
tmp = NULL;
free(line);
line = NULL;
return (NULL);
}
while (taken)
{
cpt++;
taken = strtok(NULL,DELIM);
}
free(tmp);


command = malloc(sizeof(char *) (*cpt+1));
if(!command)
{
free(line)
return(NULL);
}
taken = strtok(line,DELIM);
while (taken)
{
command[i] = _strdup(taken);
taken = strtok(NULL,DELIM);
i++;
}
free(line);
line = NULL;
command[i]= NULL;
return (command);
}