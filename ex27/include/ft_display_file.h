/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:06:47 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/02 22:09:18 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H

# define FT_DISPLAY_FILE_H
# define B_SIZE		4028

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

typedef int			t_file;
int					ft_parser(char *str);
void				ft_print_str(char *str);
int					ft_open_file(char *path);

#endif
