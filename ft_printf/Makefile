NAME = libftprintf.a

SRC = ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_printnum.c \
	ft_pointer.c \

OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f

all: ${NAME}

${NAME}: ${OBJ}
	${LIBC} ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all
