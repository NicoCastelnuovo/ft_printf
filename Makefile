# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 17:35:46 by ncasteln          #+#    #+#              #
#    Updated: 2023/07/03 12:58:51 by ncasteln         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

LIBFT = libft.a

SRC = ft_printf.c \
	print_char.c \
	print_digits.c \
	print_hex.c \
	get_digit_len.c
VPATH = ./src/

OBJS = $(addprefix $(OBJS_DIR), $(SRC:.c=.o))
OBJS_DIR = ./objs/

INCLUDE = -I ./include -I ../libft/include/

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@ar rcs $(NAME) $(OBJS) ../libft/$(LIBFT)
	@echo "$(GREEN)$(NAME) successfully created!"

$(LIBFT):
	@$(MAKE) -C ../libft/

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(OBJS_DIR)
	@cc $(CFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(GREEN)$(NAME) objs successfully removed!"

fclean: clean
	@$(MAKE) fclean -C ../libft/
	@rm -f $(NAME)
	@echo "$(GREEN)$(NAME) successfully removed!"

re: fclean all

GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
NC = \033[0m

.PHONY: all, clean, fclean, re
