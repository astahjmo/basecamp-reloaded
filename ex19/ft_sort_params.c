/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:09:30 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/01 20:15:32 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**ft_sort_params(int argc, char *argv[])
{
	int		count;
	int		lol;
	char	*dota;

	count = 1;
	while (count < (argc - 1))
	{
		lol = ft_strcmp(argv[count], argv[count + 1]);
		if (lol > 0)
		{
			dota = argv[count];
			argv[count] = argv[count + 1];
			argv[count + 1] = dota;
			count = 0;
		}
		count++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	char	**news;
	int		count;
	int		count_letter;

	if (argc < 1)
		return (0);
	count = 0;
	count_letter = 0;
	news = ft_sort_params(argc, argv);
	while (++count < argc)
	{
		while (news[count][count_letter])
		{
			ft_putchar(news[count][count_letter]);
			count_letter++;
		}
		ft_putchar('\n');
		count_letter = 0;
	}
	return (0);
}
