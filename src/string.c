/*
** EPITECH PROJECT, 2018
** string.c
** File description:
**
*/

#include "trigo.h"

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++);
	return (s1[i] - s2[i]);
}