/*
** EPITECH PROJECT, 2018
** engine_math.c
** File description:
**
*/

#include "trigo.h"

double *divi_mat(double *src, double k, int len, int size)
{
	double *mat = malloc(sizeof(double) * len);

	if (mat == NULL)
		return (NULL);
	for (int y = 0; y < size; y++)
		for (int x = 0; x < size; x++)
			mat[x + (y * size)] = src[x + (y * size)] / k;
	return (mat);
}

double *multi_mat(double *src, double *obj, int len, int size)
{
	double *mat = malloc(sizeof(double) * len);
	double tmp;

	if (mat == NULL)
		return (NULL);
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			tmp = 0;
			for (int i = 0; i < size; i++)
				tmp += src[(y * size) + i]
					* obj[(size * i) + x];
			mat[x + (y * size)] = tmp;
		}
	}
	return (mat);
}

double *add_mat(double *src, double *obj, int len)
{
	double *mat = malloc(sizeof(double) * len);

	if (mat == NULL)
		return (NULL);
	for (int i = 0; i < len; i++)
		mat[i] = src[i] + obj[i];
	return (mat);
}

double *sub_mat(double *src, double *obj, int len)
{
	double *mat = malloc(sizeof(double) * len);

	if (mat == NULL)
		return (NULL);
	for (int i = 0; i < len; i++)
		mat[i] = src[i] - obj[i];
	return (mat);
}