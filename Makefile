# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/13 19:05:34 by lflorrie          #+#    #+#              #
#    Updated: 2020/12/21 18:13:26 by lflorrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_split.c \
	ft_tolower.c \
	ft_toupper.c \
	get_next_line.c \
	ft_count_words.c \
	ft_array_len.c \
	ft_free_words.c \
	ft_list_to_array.c \

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c
NAME = libft.a
.PHONY:all clean fclean re bonus

OBJ = $(SRC:.c=.o)

DEP = $(SRC:.c=.d)

OBJ_BONUS = $(BONUS:.c=.o) $(SRC:.c=.o)

all: $(NAME)

bonus:
	@make OBJ="$(OBJ_BONUS)" all

$(NAME): $(OBJ)
	ar -rcs $(NAME) $?

%.o:%.c
	gcc $(FLAGS) -c $< -o $@
	$(CC) -MM $(FLAGS) $< > $*.d

-include $(OBJ:.o=.d)

clean:
	rm -rf $(OBJ) $(OBJ_BONUS) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
