/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:21:16 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/29 00:17:50 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	mult;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	mult = 1;
	while (nb != 1)
	{
		mult *= nb;
		nb--;
	}
	return (mult);
}
