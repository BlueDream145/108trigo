/*
** EPITECH PROJECT, 2018
** instances.c
** File description:
**
*/

#include "trigo.h"

struct request *get_request_instance(void)
{
	struct request *req = malloc(sizeof(struct request));

	if (req == NULL)
		return (NULL);
	req->callback = EXIT_NORMAL;
	return (req);
}

void free_instance(struct request *req)
{
	free(req->content);
	free(req->result);
	free(req);
}

struct request *serialize_instance(struct request *req,
	int ac, char **as)
{
	req->content = malloc(sizeof(double) * (ac - 2));
	req->result = malloc(sizeof(double) * (ac - 2));
	req->len = ac - 2;
	req->size = sqrt(req->len);

	if (req->content == NULL || req->result == NULL)
		return (NULL);
	define_type(req, as[1]);
	for (int i = 2; i < ac; i++)
		req->content[i - 2] = atof(as[i]);
	return (req);
}

void define_type(struct request *req, char *str)
{
	if (my_strcmp(str, "EXP") == 0)
		req->type = EXP;
	if (my_strcmp(str, "COS") == 0)
		req->type = COS;
	if (my_strcmp(str, "SIN") == 0)
		req->type = SIN;
	if (my_strcmp(str, "COSH") == 0)
		req->type = COSH;
	if (my_strcmp(str, "SINH") == 0)
		req->type = SINH;
}