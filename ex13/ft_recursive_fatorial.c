/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_fatorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:33:05 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/23 17:51:26 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_fatorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_fatorial(nb - 1));
}
