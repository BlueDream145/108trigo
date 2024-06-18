/*
** EPITECH PROJECT, 2017
** file.h
** File description:
**
*/

#ifndef trigo_
#define trigo_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#define EXIT_NORMAL 0
#define EXIT_FAIL 84
#define APP_TURN 200

struct request {
	double *content;
	double *result;
	int len;
	int size;
	int type;
	int callback;
};

enum type {
	EXP,
	COS,
	SIN,
	COSH,
	SINH
};

// check.c
int check_params(int ac, char **as);
int check_number(char *str);

// display.c
void display_result(double *src, int size);
void display_help(void);

// engine_math.c
double *multi_mat(double *src, double *obj, int len, int size);
double *add_mat(double *src, double *obj, int len);
double *sub_mat(double *src, double *obj, int len);
double *divi_mat(double *src, double k, int len, int size);

// engine_matrix.c
void copy_mat(double *dest, double *src, int len);
int equal_mat(double *dest, double *src, int len);
int empty_mat(double *src, int len);
double *get_default_mat(int size, int len);

// engine_trigo.c
void process_exp(struct request *req);
void process_cos(struct request *req);
void process_sin(struct request *req);
void process_cosh(struct request *req);
void process_sinh(struct request *req);

// engine.c
int process(struct request *req);
int can_leave(struct request *req, double *current);

// instances.c
struct request *get_request_instance(void);
void free_instance(struct request *req);
struct request *serialize_instance(struct request *req,
	int ac, char **as);
void define_type(struct request *req, char *str);

// string.c
int my_strcmp(char const *s1, char const *s2);

#endif /* trigo */