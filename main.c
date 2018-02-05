/*
** EPITECH PROJECT, 2017
** main
** File description:
** main soboban 2017 
*/

#include "./include/my.h"

char	*findpn(char *str, int *n)
{
	while (str[*n] != '\n') {
		*n = *n + 1;
	}
	*n = *n + 1;
	return (str);
}

int	init(int ac, char *str, int *nbro, int tabo[2]) {

	if (ac != 2)
		exit(84);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'O') {
			tabo[*nbro] = i;
			*nbro = *nbro + 1;
		}
	}
	initscr();
	curs_set(0);
	return (tabo[2]);
}

int	saveO(char *str, int *counto, int nbro, int tabo[2])
{
	int boolean = 0;

	for (int i = 0; i != nbro; i++) {
			if (str[tabo[i]] == ' ')
				str[tabo[i]] = 'O';
	}
	for (int i = 0; i != nbro; i++) {
			if (str[tabo[i]] == 'X')
				*counto = *counto + 1;
			if (*counto == nbro)
				boolean = 1;
	}
	*counto = 0;
	printw(str);
	return (boolean);
}

int	printh(char *av1)
{
	if (av1[0] == '-') {
		my_putstr("USAGE\n");
		my_putstr("	./my_sokoban map\n");
		my_putstr("DESCRIPTION\n");
		my_putstr("	map file representing the warehouse map, ");
		my_putstr("containing ‘#’ for walls, ‘P’ for the player, ");
		my_putstr("‘X’ for boxes and ‘O’ for storage locations.\n");
		return (0);
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (84);
	printh(av[1]);
	param_t p = initparam(p, av);

	p.tabo[2] = init(ac, p.str, &p.nbro, p.tabo);
	while (1) {
		clear();
		p.str = findpn(p.str, &p.n);
		p.boolean = saveO(p.str, &p.counto, p.nbro, p.tabo);
		p.ch = getch();
		p.str = keyup(p.str, &p.n, p.ch);
		p.str = keydown(p.str, &p.n, p.ch);
		p.str = keyright(p.str, p.ch);
		p.str = keyleft(p.str, p.ch);
		p.n = 0;
		if (p.ch == 32)
			break;
		if (p.boolean == 1)
			return (0);
		refresh();
	}
	endwin();
	free(p.str);
	return (1);
}
