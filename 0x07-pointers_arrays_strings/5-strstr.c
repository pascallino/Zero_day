#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring in an array 
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
    int j = 0;
    int k = 0;

    int pos = 0;
    int flg = 0;

    while (*(needle + k))
        k++;


    i = 0;
    while (*(haystack)) 
    {
j = 0;

        while (*(needle + j)) {
if (*haystack == ' ' && k != pos)
	{
		pos = 0;
		flg = 0;
		break;
	}
        if (needle[j] == *haystack) 
	    {
                    pos++;
		if (k == pos)
		{
                    flg = 1;
		    break;
		}
	return (haystack);
            }
	else
	{
		pos = 0;
		break;
	}
			    
            j++;
        }
        haystack++;
    }

    return (NULL);
}
