# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pprieto- <pprieto-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 20:45:56 by pprieto-          #+#    #+#              #
#    Updated: 2022/09/17 21:37:11 by pprieto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC	=	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \

SRCBONUS	=	nada\

OBJ_DIR	=	objs/



OBJ	=	$(addprefix $(OBJ_DIR), $(SRC:.c=.o))

OBJBONUS = $(addprefix $(OBJ_DIR), $(SRCBONUS:.c=.o))

CCOMPILE	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

$(OBJ_DIR)%.o	:	%.c
					mkdir -p $(OBJ_DIR)
					$(CCOMPILE) $(CFLAGS) -c $< -o $@

$(NAME)			:	$(OBJ)
					ar -r $(NAME) $(OBJ)

all 			: 	$(NAME)

clean			:	
					rm -Rf $(OBJ_DIR)

fclean			:	clean
					rm -f $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re