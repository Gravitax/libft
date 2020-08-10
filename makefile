# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maboye <maboye@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 11:17:40 by maboye            #+#    #+#              #
#    Updated: 2020/08/10 20:12:29 by maboye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

DEBUG	?=	0
ifeq ($(DEBUG), 1)
    FLAGS += -g3 -fsanitize=address
endif

OPTI	?=	0
ifeq ($(OPTI), 1)
    FLAGS += -Ofast -march=native
endif

INCLUDE	=	libft.h\
			dynarray/dynarray.h

D_ARRAY	 =	./array
D_CHAR	 =	./char
D_DARR	 =	./dynarray
D_MATHS  =	./maths
D_MEM	 =	./memory
D_PRINT	 =	./print
D_STRING =	./string

S_ARRAY	=	ft_arr_cdup.c\
			ft_arr_cprint.c\
			ft_arrfree.c\
			ft_arrlen.c

S_CHAR	=	ft_isalnum.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_ishexa.c\
			ft_islower.c\
			ft_isprintable.c\
			ft_isspace.c\
			ft_isupper.c

S_DARR	=	dynarray.c\
			dynarray_insert.c\
			dynarray_mem.c\
			dynarray_sort.c\
			dynarray_stack.c

S_MATHS	=	ft_isprime.c\
			ft_power.c\
			ft_rsqrt.c\
			ft_sqrt.c

S_MEM	=	ft_memalloc.c\
			ft_memcpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memdel.c\
			ft_memset.c

S_PRINT	=	ft_printf.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putnbr.c\
			ft_putnbr_fd.c\
			ft_putstr.c\
			ft_putstr_fd.c\

S_STRING =	ft_abs.c\
			ft_atof.c\
			ft_atoi.c\
			ft_atoi_base.c\
			ft_intlen.c\
			ft_itoa.c\
			ft_readfile.c\
			ft_realloc.c\
			ft_strcat.c\
			ft_strchr.c\
			ft_strclen.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strdel.c\
			ft_strdup.c\
			ft_strfjoin.c\
			ft_strjoin.c\
			ft_strlen.c\
			ft_strncat.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strsplit.c\
			ft_strstr.c\
			ft_strsub.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_wordcount.c\
			get_next_line.c

SRC		=	$(addprefix $(D_ARRAY)/,$(S_ARRAY))\
			$(addprefix $(D_CHAR)/,$(S_CHAR))\
			$(addprefix $(D_DARR)/,$(S_DARR))\
			$(addprefix $(D_MATHS)/,$(S_MATHS))\
			$(addprefix $(D_MEM)/,$(S_MEM))\
			$(addprefix $(D_PRINT)/,$(S_PRINT))\
			$(addprefix $(D_STRING)/,$(S_STRING))

OBJ 	=	$(SRC:.c=.o)

GRA		=	\033[1m
SOU		=	\033[4m
BLI		=	\033[5m
BLA		=	\033[30m
RED		=	\033[31m
GRE		=	\033[32m
YEL		=	\033[33m
BLU		=	\033[34m
PUR		=	\033[35m
CYA		=	\033[36m
WHI		=	\033[37m
ORG		=	\033[1;31m
END		=	\033[0m

all:		$(NAME)

%.o: 		%.c $(INCLUDE)
			@printf "${RED}Compiling [$<]"
			@printf "                          \\r${END}"
			@$(CC) $(FLAGS) -c -o $@ $<

$(NAME):	$(OBJ)
			@ar rcs $(NAME) $(OBJ)
			@printf "$(GRE)Libft successfully compiled !"
			@printf "                           \n${END}"

clean:
			@/bin/rm -rf $(OBJ)

fclean:		clean
			@/bin/rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
