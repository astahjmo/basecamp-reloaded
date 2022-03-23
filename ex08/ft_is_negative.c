/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:23:59 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/23 15:30:37 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_is_negative(int number)
{
	if (number >= 0)
		ft_putchar('P');
	if (number < 0)
		ft_putchar('N');
}
