/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:50:21 by johmatos          #+#    #+#             */
/*   Updated: 2022/03/29 01:02:49 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_strtochar(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int	count;

	count = 0;
	while (++count <= argc -1)
		ft_strtochar(argv[count]);
	return (0);
}
