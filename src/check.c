/*
** EPITECH PROJECT, 2018
** check.c
** File description:
**
*/

#include "trigo.h"

int check_params(int ac, char **as)
{
	if (ac == 1)
		return (0);
	if (my_strcmp(as[1], "EXP") != 0 && my_strcmp(as[1], "COS") != 0 &&
		my_strcmp(as[1], "SIN") != 0 && my_strcmp(as[1], "COSH") != 0
		&& my_strcmp(as[1], "SINH") != 0)
		return (0);
	for (int i = 2; i < ac; i++)
		if (check_number(as[i]) == 0)
			return (0);
	if ((ac - 2) != 1 && (ac - 2) != 4 && (ac - 2) != 9
		&& (ac - 2) != 16 && (ac - 2) != 25)
		return (0);
	if (sqrt(ac - 2) != (int)sqrt(ac - 2))
		return (0);
	return (1);
}

int check_number(char *str)
{
	for (int i = 0; str[i]; i++)
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
			return (0);
	return (1);
}