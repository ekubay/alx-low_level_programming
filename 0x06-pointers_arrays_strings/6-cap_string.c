#include "main.h"
/**
 * cap_string - capitaize all words
 * @sr: string to be capital
 *
 * Return: capitalized words
 */
char *cap_string(char *sr)
{
	int ln, j;
	char se[13] = {' ', '\t', '\n', ',', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (ln = 0; sr[ln] != '\0'; ln++)
	{
		if (ln == 0 && sr[ln] >= 97 && sr[ln] <= 122)
			sr[ln] -= 32;
		for (j = 0; j < 13; j++)
			if (sr[ln] == se[j])
				if (sr[ln + 1] >= 97 && sr[ln + 1] <= 122)
					sr[ln + 1] -= 32;
	}
	return (sr);
}

