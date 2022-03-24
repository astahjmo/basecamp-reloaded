/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_fatorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:21:16 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/23 17:57:36 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_fatorial(int nb)
{
	int	mult;

	if (nb > 0)
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
