NAME = libftprintf.a

SRC = ft_printf.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_strchr.c \

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