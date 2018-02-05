/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Headers || 2017 
*/

#include <ncurses.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct param_s
{
	char *str;
	int ch;
	int n;
	int counto;
	int nbro;
	int boolean;
	int tabo[2];
}	param_t;

char	*keyup(char *str, int *n, int ch);
char	*keydown(char *str, int *n, int ch);
char	*keyright(char *str, int ch);
char	*keyleft(char *str, int ch);
param_t	initparam(param_t param, char **av);
int	my_strlen(char *str);
char	*my_strcat(char *s1, char *s2);
char	*get_file(char *path);
char	*findpn(char *str, int *n);
void	my_putstr(char *str);
void	my_putchar(char c);