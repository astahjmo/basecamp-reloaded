# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 13:21:48 by johmatos          #+#    #+#              #
#    Updated: 2022/04/02 22:06:12 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN		= ft_display_file
SRCS 			= ./src
INCLUDES 		= ./include
C_FILES 		= ft_print_str.c main.c ft_display_file.c ft_parser.c
C_FLAGS 		= -Wall -Wextra -Werror
COMPILER 		= gcc
OBJS 			= $(C_FILES:$.c=o)
CMD_RM			= rm -f

all:	$(OBJS)

$(OBJS):	$(addprefix $(SRCS)/,$(C_FILES))
	$(COMPILER) $(CFLAGS) $(addprefix $(SRCS)/,$(C_FILES)) -I$(INCLUDES) -o $(BIN)

clean:
	$(CMD_RM) $(OBJS)

fclean:		clean
	$(CMD_RM) $(BIN)

re: fclean all

.PHONY: all clean fclean re
