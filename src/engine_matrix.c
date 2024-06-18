/*
** EPITECH PROJECT, 2018
** engine_matrix.c
** File description:
**
*/

#include "trigo.h"

void copy_mat(double *dest, double *src, int len)
{
	memcpy(dest, src, sizeof(double) * len);
}

int equal_mat(double *dest, double *src, int len)
{
	for (int i = 0; i < len; i++)
		if (dest[i] != src[i])
			return (0);
	return (1);
}

int empty_mat(double *src, int len)
{
	for (int i = 0; i < len; i++)
		if (src[i] != 0)
			return (0);
	return (1);
}

double *get_default_mat(int size, int len)
{
	double *mat = malloc(sizeof(double) * len);

	if (mat == NULL)
		return (NULL);
	for (int y = 0; y < size; y++)
		for (int x = 0; x < size; x++)
			if (x == y)
				mat[x + (y * size)] = 1;
			else
				mat[x + (y * size)] = 0;
	return (mat);
}