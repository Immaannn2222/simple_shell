#include "shell.h"
/**
 * *find_env - function that finds the environment
 * @glovar: parameter
 * Return: char
 */
char *find_env(char *glovar)
{
	int i, j;
	char *a;

	if (!glovar)
		return (NULL);
	for (i = 0; environ[i]; i++)
	{
		j = 0;
		if (glovar[j] == environ[i][j])
		{
			while (glovar[j])
			{
				if (glovar[j] != environ[i][j])
					break;

				j++;
			}
			if (glovar[j] == '\0')
			{
				a = (environ[i] + j + 1);
				return (a);
			}
		}
	}
	return (0);
}