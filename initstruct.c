/*
** EPITECH PROJECT, 2017
** initstruct 
** File description:
** inisialisation de structure
*/

#include "./include/my.h"

param_t	initparam(param_t param, char **av)
{
	param.str = get_file(av[1]);
	param.n = 0;
	param.counto = 0;
	param.nbro = 0;
	param.boolean = 0;
	return (param);
}
