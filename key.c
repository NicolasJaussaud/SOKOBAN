/*
** EPITECH PROJECT, 2017
** key
** File description:
** key up, down, left, right 
*/

#include "./include/my.h"

char	*keyup(char *str, int *n, int ch)
{
	int p = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'P')
			p = i;
	}
	if (ch == 65 && str[p - *n] != '#') {
		if (str[p - *n] == 'X' && str[p - *n - *n] != 'X' &&
			str[p - *n - *n] != '#') {
			str[p] = ' ';
			str[p - *n] = 'P';
			str[p - *n - *n] = 'X';
		}
		if (str[p - *n] != 'X') {
			str[p] = ' ';
			str[p - *n] = 'P';
		}
	}
	return (str);
}

char	*keydown(char *str, int *n, int ch)
{
	int p = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'P')
			p = i;
	}
	if (ch == 66 && str[p + *n] != '#') {
		if (str[p + *n] == 'X' && str[p + *n + *n] != 'X' &&
		str[p + *n + *n] != '#') {
			str[p] = ' ';
			str[p + *n] = 'P';
			str[p + *n + *n] = 'X';
		}
		if (str[p + *n] != 'X') {
			str[p] = ' ';
			str[p + *n] = 'P';
		}
	}
	return (str);
}

char	*keyright(char *str, int ch)
{
	int p = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'P')
			p = i;
	}
	if (ch == 67 && str[p + 1] != '#') {
		if (str[p + 1] == 'X' && str[p + 2] != 'X' &&
			str[p + 2] != '#') {
			str[p] = ' ';
			str[p + 1] = 'P';
			str[p + 2] = 'X';
		}
		if (str[p + 1] != 'X') {
			str[p] = ' ';
			str[p + 1] = 'P';
		}
	}
	return (str);
}

char	*keyleft(char *str, int ch)
{
	int p = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'P')
			p = i;
	}
	if (ch == 68 && str[p - 1] != '#' ) {
		if (str[p - 1] == 'X' && str[p - 2] != 'X' &&
			str[p - 2] != '#') {
			str[p] = ' ';
			str[p - 1] = 'P';
			str[p - 2] = 'X';
		}
		if (str[p - 1] != 'X') {
			str[p] = ' ';
			str[p - 1] = 'P';
		}
	}
	return (str);
}
