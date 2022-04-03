/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:06:23 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/02 20:47:51 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_display_file.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_print_str("File name missing.\n");
	else if (argc > 2)
		ft_print_str("Too many arguments.\n");
	else
		ft_parser(argv[1]);
	return (1);
}
