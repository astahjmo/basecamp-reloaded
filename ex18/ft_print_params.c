/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:50:21 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/29 00:01:14 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	count;
	int	str_po;

	str_po = 0;
	count = 0;
	while (count <= argc - 1)
	{
		while (argv[count][str_po] != '\0' )
		{
			ft_putchar(argv[count][str_po]);
			str_po++;
		}
		str_po = 0;
		count++;
	}
	return (0);
}
