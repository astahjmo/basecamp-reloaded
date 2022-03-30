/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:19:46 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/30 15:07:53 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *destination, char *source, int len)
{
	int		count;
	char	*d;

	d = destination;
	count = 0;
	while (source[count] || count <= len)
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
	return (count);
}

char	*ft_strdup(char *src)
{
	int		len;
	void	*new;

	len = ft_strlen(src) + 1;
	new = malloc(len);
	if (new == NULL)
		return (NULL);
	return ((char *) ft_memcpy(new, src, len));
	free(new);
}
