# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rverscho <rverscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/02 19:12:32 by rverscho       #+#    #+#                 #
#    Updated: 2019/11/15 13:15:07 by rverscho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c \
	ft_substr.c ft_strjoin.c ft_strcpy.c ft_split.c ft_strmapi.c \
	ft_itoa.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

O_FILES := $(SRC:.c=.o)
BO_FILES := $(BONUS:.c=.o)
CC = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(O_FILES)
	ar rc $(NAME) $(O_FILES)

bonus: $(NAME) $(BO_FILES)
	ar rc $(NAME) $(BO_FILES)

%.o: %.c
	$(CC) -c $? -o $@

clean:
	/bin/rm -f $(O_FILES) $(BO_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
