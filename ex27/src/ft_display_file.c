/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:37:08 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/02 20:58:42 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_display_file.h"

int	ft_open_file(char *path)
{
	t_file		file;
	char		buffer[B_SIZE];
	int			result;

	file = open(path, 'r');
	if (!file)
		return (0);

	result = read (file,buffer,B_SIZE);
	if (result < 0)
		return (0);
	ft_print_str(buffer);
	printf("%d", result);
	close(file);
	return (1);
}
