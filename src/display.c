/*
** EPITECH PROJECT, 2018
** display.c
** File description:
**
*/

#include "trigo.h"

void display_result(double *src, int size)
{
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			printf("%.2f", src[x + (y * size)]);
			if (x != size - 1)
				printf("\t");
			else
				printf("\n");
		}
	}
}

void display_help(void)
{
	const char *usage = "USAGE\n"
		"           ./108trigo fun a0 a1 a2....\n";
	const char *description = "DESCRIPTION\n"
		"           fun      function to be applied, among at least "
		"'EXP', 'COS', 'SIN', 'COSH' and 'SINH'\n"
		"           ai       coeficients of the matrix\n";

	printf("%s%s", usage, description);
}