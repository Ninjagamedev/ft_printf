# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 01:11:19 by alalmeid          #+#    #+#              #
#    Updated: 2024/02/17 01:29:03 by alalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC	=	\
ft_printf \

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rc

all: $(NAME)

$(NAME): $(SRC:=.o)
		$(MAKE) -C libft
		$(AR) $(NAME) libft/libft.a $(SRC:=.o)


clean:
	$(RM) $(SRC:=.o)

fclean: clean
			$(MAKE) -C libft fclean
			$(RM) $(NAME)

re: fclean $(NAME)
