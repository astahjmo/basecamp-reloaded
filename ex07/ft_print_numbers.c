/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:23:32 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/28 23:22:07 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char a);

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = '0';
	while (alpha <= '9')
	{
		ft_putchar(alpha);
		alpha++;
	}
}
