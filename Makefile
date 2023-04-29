# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 17:35:46 by ncasteln          #+#    #+#              #
#    Updated: 2023/04/28 17:02:42 by ncasteln         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = ./libft/libft.a
SRC = ft_printf.c \
	match_arg_type.c \
	print_char.c \
	print_string.c \
	print_signed.c \
	print_unsigned.c \
	print_address.c \
	get_digit_length.c \
	ft_putlong.c
OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)
	ar -t $(NAME)

%.o: %.c
	cc -c $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME) a.out

re: fclean all

main: $(NAME)
	cc $(NAME) main.c

PHONY: all clean fclean re main
