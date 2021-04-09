NAME	= Rush

HDRS	= rush.h

FILES	= rush.c main.c

LIB		= lib.a

S_PATH	= srcs/
I_PATH	= includes/
L_PATH	= libft/

SRCS	= $(addprefix ${S_PATH}, ${FILES})
INC		= $(addprefix ${I_PATH}, ${HDRS})
LIBFT	= $(addprefix ${L_PATH}, ${LIB})

OBJS	= ${SRCS:.c=.o}

CC		= clang

FLAGS	= -Wall -Werror -Wextra

FSANIT	= -g3 -fsanitize=address

MAKE	= make -C

RM		= rm -rf

all: lib ${NAME}

lib:
	${MAKE} ${L_PATH}

${NAME}: ${INC} ${LIBFT}
	${CC} ${FLAGS} -I ${I_PATH} ${LIBFT} -c ${SRCS} -o ${OBJS}

fsanit:
	${NAME} ${FSANIT}

clean:
	${RM} ${OBJS}
	${MAKE} ${L_PATH}

fclean: clean
	${RM} ${LIBFT}
	${RM} ${NAME}

re:		fclean make

.PHONY:		all lib fsanit clean fclean
