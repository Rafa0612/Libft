# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 16:05:13 by rpena-ro          #+#    #+#              #
#    Updated: 2025/12/02 12:24:09 by rpena-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra
RECURSOS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c \
			ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c \
			ft_memchr.c ft_memcmp.c ft_strnstr.c\
			ft_atoi.c ft_calloc.c ft_strdup.c\
			ft_strjoin.c ft_substr.c ft_strtrim.c\
			ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

RECURSOS_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
					ft_lstclear_bonus.c ft_lstdelone_bonus.c \
					ft_lstiter_bonus.c ft_lstlast_bonus.c \
					ft_lstmap_bonus.c ft_lstnew_bonus.c \
					ft_lstsize_bonus.c \
					
OBJ = $(RECURSOS:.c=.o)

OBJ_BONUS = $(RECURSOS_BONUS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@  

bonus: $(OBJ) $(OBJ_BONUS)
	@ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS)
		
clean: 
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
