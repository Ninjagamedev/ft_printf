# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 01:11:19 by alalmeid          #+#    #+#              #
#    Updated: 2024/02/19 20:04:26 by alalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC	=	\
ft_printf print_character print_hexadecimal \
print_number print_pointer print_u_number print_string \

LIBFT = ./libft
CC = cc
RM = rm -f
#CFLAGS = -Wall -Wextra -Werror
AR = ar rc

# Colors

DEF_COLOR = \033[0;39m
MAGENTA = \033[0;95m

all: $(NAME)

bonus: all

$(NAME): $(SRC:=.o)
	$(MAKE) -C $(LIBFT)
	$(AR) $(NAME) $(SRC:=.o) $(LIBFT)/*.o # include all object files in libftprintf.a


clean:
	@make -s clean -C $(LIBFT)
	@$(RM) $(SRC:=.o)
	@echo "$(MAGENTA) 🌪️ ft_printf object files cleaned!🌪️"

fclean: clean
			@$(RM) -f $(NAME)
			@echo "$(MAGENTA) 🌪️ ft_printf.a cleaned!🌪️"
			@$(RM) -f $(LIBFT)/libft.a
			@echo "$(MAGENTA) 🌪️ libft.a cleaned!🌪️"

re: fclean all

.PHONY:	all bonus clean fclean re libft

