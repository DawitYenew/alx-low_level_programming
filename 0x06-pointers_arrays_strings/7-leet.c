#include "main.h"
#include <stdio.h>

/**
 * leet - encode
 * @s: pointer to char params
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char ch1[] = "aeotl";
	char ch2[] = "AEOTL";
	char leetChar = "43071";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		
			if (s[i] == ch1[j] || s[i] == ch2[j])
			
				s[i] = leetChar[j];
				break;
			
		
	}
	return (0);
}
