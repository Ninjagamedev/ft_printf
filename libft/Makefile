# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 17:51:41 by alalmeid          #+#    #+#              #
#    Updated: 2024/02/19 19:30:31 by alalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC	=	\
ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit \
ft_isprint ft_memset ft_strlen ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper \
ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi \
ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi \
ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_u_itoa ft_count_hex\
ft_hex_to_str \

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rc

# Colors

DEF_COLOR = \033[0;39m
MAGENTA = \033[0;95m

all:$(NAME)

$(NAME): $(SRC:=.o)
		$(AR) $(NAME) $(SRC:=.o)


clean:
	@$(RM) $(SRC:=.o)
	@echo "$(MAGENTA) 🌪️ libft object files cleaned!🌪️"

fclean: clean
			$(RM) $(NAME)

re: fclean $(NAME)
