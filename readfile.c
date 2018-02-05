/*
** EPITECH PROJECT, 2017
** key
** File description:
** read&save file 
*/

#include "./include/my.h"

int	my_strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (84);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*my_strcat(char *s1, char *s2)
{
	char *new_str = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
	int i = 0;
	int j = 0;

	if (s1 != NULL) {
		while (i < my_strlen(s1)) {
			new_str[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL) {
		while (j < my_strlen(s2)) {
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	return (new_str);
}

char	*get_file(char *path)
{
	char *file= NULL;
	char *buffer;
	int fd;
	int ret = 0;

	if ((buffer = malloc(sizeof(char) * 4096)) == NULL)
		exit(84);
	if ((fd = open(path, O_RDONLY)) == -1)
		exit(84);
	while ((ret = read(fd, buffer, 4096)) != 0) {
		if (ret == -1)
			exit(84);
		buffer[ret] = '\0';
		file = my_strcat(file, buffer);
	}
	close(fd);
	free(buffer);
	return (file);
}