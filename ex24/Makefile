# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 12:40:09 by johmatos          #+#    #+#              #
#    Updated: 2022/04/02 23:25:26 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME		= libft.a
SRCS 			= ./srcs
INCLUDES 		= ./includes
C_FILES 		= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
C_FLAGS 		= -Wall -Wextra -Werror
COMPILER 		= gcc
OBJS 			:= $(C_FILES:$.c=o)
CMD_RM			= rm -f

all:	$(LIB_NAME)

$(LIB_NAME):	$(OBJS)
	ar rcs $(LIB_NAME) $(OBJS)

$(OBJS):	$(addprefix $(SRCS)/,$(C_FILES))
	$(COMPILER) $(CFLAGS) -c $(addprefix $(SRCS)/,$(C_FILES)) -I $(INCLUDES)

clean:
	$(CMD_RM) $(OBJS)

fclean:		clean
	$(CMD_RM) $(LIB_NAME)

re: fclean all

.PHONY: all clean fclean re
