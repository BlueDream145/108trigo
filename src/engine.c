/*
** EPITECH PROJECT, 2018
** engine.c
** File description:
**
*/

#include "trigo.h"

int process(struct request *req)
{
	switch (req->type) {
		case EXP:
			process_exp(req);
			break;
		case COS:
			process_cos(req);
			break;
		case SIN:
			process_sin(req);
			break;
		case COSH:
			process_cosh(req);
			break;
		case SINH:
			process_sinh(req);
			break;
	}
	display_result(req->result, req->size);
	return (req->callback);
}

int can_leave(struct request *req, double *current)
{
	if (equal_mat(req->result, current, req->len))
		return (1);
	if (empty_mat(req->result, req->len)) {
		copy_mat(req->result, current, req->len);
		return (1);
	}
	return (0);
}