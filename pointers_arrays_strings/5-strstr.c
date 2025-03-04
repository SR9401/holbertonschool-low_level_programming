#include <stdio.h>
#include "main.h"
/**
*_strstr - pppp
*
*@haystack: yyyy
*
*@needle: rrr
*Return: Always 0
**/

/*char *_strstr(char *haystack, char *needle)
{
	int i, b;
	i = 0;
		while (haystack[i] != '\0')
	{
		b = 0;
			while (needle[b] != '\0')
		{
			if (needle[b] == haystack[i])
			int c = i;
			b++;
			i++;
        {
		}
		i++;
	}
	return (NULL);
*/
char *_strstr(char *haystack, char *needle)
{
	int i, b;
	b = 0;
		while (needle[i] != haystack[b])
	{
		i = 0;
		b++;
	}
			while (haystack[b] < '\0' || needle[i] != haystack[b])
		{
			i++;
			b++;
				if (needle[i] == '\0')
			{
				return ();
			}
		}
return (NULL);
}
