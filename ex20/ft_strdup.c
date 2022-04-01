/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:19:46 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/01 11:40:02 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_memcpy(void *destination, char *source, int len)
{
	int		count;
	char	*d;

	d = destination;
	count = 0;
	while (source[count] && count < len)
	{
		d[count] = source[count];
		count++;
	}
	d[count] = '\0';
	return (d);
}

int	ft_strlen(char *src)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	return (count + 1);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*new;

	len = ft_strlen(src);
	new = malloc(len);
	if (new == NULL)
		return (NULL);
	return (ft_memcpy(new, src, len));
}
