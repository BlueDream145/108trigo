/*
** EPITECH PROJECT, 2018
** engine_trigo.c
** File description:
**
*/

#include "trigo.h"

void process_exp(struct request *req)
{
	double *array = malloc(sizeof(double) * req->len);
	double *tmp = malloc(sizeof(double) * req->len);
	double *current = malloc(sizeof(double) * req->len);
	double fac = 1;

	if (req->result == NULL || array == NULL
		|| tmp == NULL || current == NULL) {
		req->callback = EXIT_FAIL;
		return;
	}
	req->result = get_default_mat(req->size, req->len);
	copy_mat(array, req->content, req->len);
	req->result = add_mat(req->result, req->content, req->len);
	for (int i = 2; i < APP_TURN; i++) {
		copy_mat(current, req->result, req->len);
		array = multi_mat(array, req->content, req->len, req->size);
		fac *= i;
		copy_mat(tmp, array, req->len);
		tmp = divi_mat(tmp, fac, req->len, req->size);
		req->result = add_mat(req->result, tmp, req->len);
		free(tmp);
		if (can_leave(req, current))
			break;
	}
	free(array);
	free(current);
}

void process_cos(struct request *req)
{
	double *array = malloc(sizeof(double) * req->len);
	double *tmp = malloc(sizeof(double) * req->len);
	double *current = malloc(sizeof(double) * req->len);
	double fac = 2;
	int j = 2;
	int i = 2;

	if (req->result == NULL || array == NULL
		|| tmp == NULL || current == NULL) {
		req->callback = EXIT_FAIL;
		return;
	}
	req->result = get_default_mat(req->size, req->len);
	copy_mat(array, req->content, req->len);
	while (i < APP_TURN) {
		copy_mat(current, req->result, req->len);
		array = multi_mat(array, req->content, req->len, req->size);
		copy_mat(tmp, array, req->len);
		tmp = divi_mat(tmp, fac, req->len, req->size);
		if (i % 2)
			req->result = add_mat(req->result, tmp, req->len);
		else
			req->result = sub_mat(req->result, tmp, req->len);
		free(tmp);
		array = multi_mat(array, req->content, req->len, req->size);
		i++;
		fac *= ++j;
		fac *= ++j;
		if (can_leave(req, current))
			break;
	}
	free(array);
	free(current);
}

void process_sin(struct request *req)
{
	double *array = malloc(sizeof(double) * req->len);
	double *tmp = malloc(sizeof(double) * req->len);
	double *current = malloc(sizeof(double) * req->len);
	double fac = 6;
	int i = 2;
	int j = 3;

	if (req->result == NULL || array == NULL
		|| tmp == NULL || current == NULL) {
		req->callback = EXIT_FAIL;
		return;
	}
	copy_mat(array, req->content, req->len);
	copy_mat(req->result, req->content, req->len);
	while (i < APP_TURN) {
		copy_mat(current, req->result, req->len);
		array = multi_mat(array, req->content, req->len, req->size);
		array = multi_mat(array, req->content, req->len, req->size);
		copy_mat(tmp, array, req->len);
		tmp = divi_mat(tmp, fac, req->len, req->size);
		if (i % 2)
			req->result = add_mat(req->result, tmp, req->len);
		else
			req->result = sub_mat(req->result, tmp, req->len);
		free(tmp);
		i++;
		fac *= ++j;
		fac *= ++j;
		if (can_leave(req, current))
			break;
	}
	free(array);
	free(current);
}

void process_cosh(struct request *req)
{
	double *array = malloc(sizeof(double) * req->len);
	double *tmp = malloc(sizeof(double) * req->len);
	double *current = malloc(sizeof(double) * req->len);
	double fac = 2;
	int i = 2;
	int j = 2;

	if (req->result == NULL || array == NULL
		|| tmp == NULL || current == NULL) {
		req->callback = EXIT_FAIL;
		return;
	}
	req->result = get_default_mat(req->size, req->len);
	copy_mat(array, req->content, req->len);
	while (i < APP_TURN) {
		copy_mat(current, req->result, req->len);
		array = multi_mat(array, req->content, req->len, req->size);
		copy_mat(tmp, array, req->len);
		tmp = divi_mat(tmp, fac, req->len, req->size);
		req->result = add_mat(req->result, tmp, req->len);
		array = multi_mat(array, req->content, req->len, req->size);
		free(tmp);
		i++;
		fac *= ++j;
		fac *= ++j;
		if (can_leave(req, current))
			break;
	}
	free(array);
	free(current);
}

void process_sinh(struct request *req)
{
	double *array = malloc(sizeof(double) * req->len);
	double *tmp = malloc(sizeof(double) * req->len);
	double *current = malloc(sizeof(double) * req->len);
	double fac = 6;
	int i = 2;
	int j = 3;

	if (req->result == NULL || array == NULL
		|| tmp == NULL || current == NULL) {
		req->callback = EXIT_FAIL;
		return;
	}
	copy_mat(array, req->content, req->len);
	copy_mat(req->result, req->content, req->len);
	while (i < APP_TURN) {
		copy_mat(current, req->result, req->len);
		array = multi_mat(array, req->content, req->len, req->size);
		array = multi_mat(array, req->content, req->len, req->size);
		copy_mat(tmp, array, req->len);
		tmp = divi_mat(tmp, fac, req->len, req->size);
		req->result = add_mat(req->result, tmp, req->len);
		free(tmp);
		i++;
		fac *= ++j;
		fac *= ++j;
		if (can_leave(req, current))
			break;
	}
	free(array);
	free(current);
}