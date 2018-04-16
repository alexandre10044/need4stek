/*
** EPITECH PROJECT, 2017
** file.h
** File description:
** 
*/

#ifndef STEK_
	#define STEK_

	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include <stdbool.h>

	#define EXIT_FAIL (84)
	#define EXIT_NORMAL (0)

	#define SPEED_POS (15)
	#define DIRECTION_POS (15)
	#define COMMAND_LIMIT_SIZE (250)
	#define GET_INFO_COMMAND ("get_info_lidar\n")
	#define START_SIMULATION ("start_simulation\n")
	#define STOP_SIMULATION ("stop_simulation\n")
	#define END_COMMAND ("Track Cleared")

// commands.c
int run_command(const char *command);
int run_forward(double val);

// converter.c
double my_atof(char *str);
int is_number(char c);

// engine_direction.c
int manage_direction(void);
int convert_direction(char **data, double direction);
int handle_direction(double val, const char *str);

// engine_speed.c
int convert_speed(double val);
int manage_speed(void);

// engine.c
void loop(void);
char *prepare_str(char *str);
int finished(char *str);

// output.c
void my_put_char(char c);
void my_put_str(const char *str);
void my_put_error(const char *str);
int my_put_float(double nbr);
int my_putnbr_base_long(long nbr, char *base);

// reader.c
char *read_line(void);
int my_getchar(void);
char *my_realloc(char *src, int pos);

// string.c
char **my_str_to_word_array(const char *str, char separator);
void split_string(const char *str, char separator,
	char **result, char *content);
char *my_strdup(const char *src);
char *my_strcpy(char *dest, const char *src);
int my_strcmp(const char *s1, const char *s2);

// utils.c
int my_strlen(const char *str);
char *my_strcat(char *dest, const char *src);
void free_char_buffer(char **tmp);

#endif /* STEK */
