#include "holberton.h"
#include <stdlib.h>

/**
 * word_count - counts number of words in agiven string
 * @str: string
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int count = 0;
	unsigned int i;

	if (str[0] != ' ')
		count = 1;
	for (i = 1; str[i + 1]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			count++;
	}
	return (count);
}

/**
 * free_arr - free array
 * @arr: array
 * @j: limit
 *
 */

void free_arr(char **arr, int j)
{
	while (j-- >= 0)
		free(arr[j]);
	free(arr);
}

/**
 * fillstr - fill string from string
 * @arr: string to fill
 * @str: string
 * @word_start: word
 * @wlen: word length
 *
 */

void fillstr(char *arr, char *str, int word_start, int wlen)
{
	int i;

	for (i = 0; i < wlen; i++)
	{
		arr[i] = str[word_start++];
	}
	arr[wlen] = '\0';
}

/**
 * strtow - split a string into words
 * @str: string
 *
 * Return: pointer to an array of strings with the last element as NULL
 * on failure will return NULL
 */

char **strtow(char *str)
{
	char **arr;
	int nwords, i, j, wlen, on_word = 0, word_start = 0;

	if (!str)
		return (0);
	nwords = word_count(str) + 1;
	arr = (char **)malloc(sizeof(char *) * nwords);
	if (!arr)
		return (0);
	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			if (on_word)
			{
				wlen = (i - word_start);
				if (str[i + 1] == '\0')
					wlen++;
				arr[j] = (char *)malloc(sizeof(char) * (wlen + 1));
				if (!arr[j])
				{
					free_arr(arr, j);
					return (0);
				}
				fillstr(arr[j++], str, word_start, wlen);
				on_word = 0;
			}
		}
		else
		{
			if (!on_word)
			{
				on_word = 1;
				word_start = i;
			}
		}
	}
	arr[j] = 0;
	return (arr);
}
