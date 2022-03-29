/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:23:27 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/29 16:55:43 by johmatos         ###   ########.fr       */
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
	p = malloc(sizeof(int) * max);
	if (p == NULL)
		return (p);
	p[count] = min;
	while (++count < max)
		p[count] = min++;
	return (p);
}
