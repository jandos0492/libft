# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 22:27:13 by zarinov           #+#    #+#              #
#    Updated: 2019/10/10 15:52:32 by zarinov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC_FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_strcmp.c ft_strcpy.c ft_strlen.c \
			ft_tolower.c ft_toupper.c ft_memdel.c ft_strdel.c \
			ft_strequ.c ft_atoi.c ft_bzero.c ft_memccpy.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_strstr.c \
			ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c \
			ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c \
			ft_putstr_fd.c ft_putstr.c ft_strcat.c ft_strchr.c \
			ft_strclr.c ft_strdup.c ft_striter.c ft_striteri.c \
			ft_strlcat.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
			ft_strnstr.c ft_strrchr.c ft_strnequ.c ft_memalloc.c \
			ft_strnew.c ft_strsub.c ft_strmapi.c ft_strjoin.c \
			ft_strtrim.c ft_strsplit.c ft_itoa.c ft_strmap.c \
			ft_lstadd.c ft_lstiter.c ft_swap.c ft_max.c ft_min.c \
			ft_check.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
			ft_lstmap.c ft_lst_add_back.c


OBJ = *.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC_FILES)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all