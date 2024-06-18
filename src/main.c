/*
** EPITECH PROJECT, 2017
** main.c
** File description:
**
*/

#include "trigo.h"

int main(int ac, char **as)
{
	struct request *req = get_request_instance();
	int callback;

	if (ac == 2 && my_strcmp(as[1], "-h") == 0) {
		display_help();
		return (EXIT_NORMAL);
	}
	if (check_params(ac, as) == 0)
		return (EXIT_FAIL);
	serialize_instance(req, ac, as);
	callback = process(req);
	free_instance(req);
	return (callback);
}