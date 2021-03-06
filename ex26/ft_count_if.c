/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:43:35 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/02 13:01:58 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f) (char*))
{
	int		count;
	int		ca_return;
	int		arr_index;

	count = 0;
	arr_index = 0;
	while (tab[arr_index])
	{
		ca_return = f (tab[arr_index]);
		if (ca_return == 1)
			count += 1;
		arr_index++;
	}
	return (count);
}
