#include "main.h"
/**
 * substring_match - check if substring after wildard matches s1
 * @s1: string 1
 * @s2: string 2
 * @after_wildcard: placeholder for position right after wildcard
 * Return: 1 if matched, 0 if not
*/
int substring_match(char *s1, char *s2, char *after_wildcard)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, after_wildcard));
	else
		return (substring_match(s1 + 1, after_wildcard, after_wildcard));
}

/**
 * wildcmp - compare if string with wildcard matches
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if matched else 0
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}

