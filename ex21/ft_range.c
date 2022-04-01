/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:23:27 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/01 11:40:38 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*p;

	p = NULL;
	count = 0;
	if (min >= max)
		return (p);
	p = malloc(sizeof(int) * (max + (-1 * min)));
	if (p == NULL)
		return (p);
	while (min < max)
		p[count++] = min++;
	return (p);
}
