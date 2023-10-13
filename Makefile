NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I./includes

OBJS = ${SRCS:.c=.o}

HEADER = ./ft_printf.h

SRCS = ft_printf.c\
	   ft_char_nb.c\
	   ft_char_nb_lu.c\
	   ft_char_nb_u.c\
	   ft_putchar.c\
	   ft_putnbr.c\
	   ft_putnbr_base.c\
	   ft_putnbr_lu.c\
	   ft_putstr.c\
	   ft_strlen.c

all :	${NAME}

%.o :		%.c ${HEADER}
	${CC} ${CFLAGS}  -c $< -o ${<:.c=.o}

${NAME} :	${OBJS}
	ar -cr ${NAME} ${OBJS}

clean :
	/bin/rm -f ${OBJS}

fclean :	clean
	/bin/rm -f ${NAME}

re :		fclean all

.PHONY : all clean fclean re
