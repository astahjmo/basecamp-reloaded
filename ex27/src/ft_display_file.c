/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:37:08 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/02 22:55:33 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_display_file.h"

int	ft_open_file(char *filepath)
{
	int		size;
	int		file_descriptor;
	char	buffer[B_SIZE + 1];

	file_descriptor = open(filepath, O_RDONLY);
	if (file_descriptor == -1)
	{
		ft_print_str("Cannot read file.\n");
		close(file_descriptor);
		return (1);
	}
	while (file_descriptor)
	{
		size = read(file_descriptor, buffer, B_SIZE);
		if (size == 0)
			break ;
		if (size == -1)
			ft_print_str("Cannot read file.\n");
		buffer[size] = 0;
		ft_print_str(buffer);
	}
	close(file_descriptor);
	return (0);
}
