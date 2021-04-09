NAME	= libft.a

PATH_I	= includes/

PATH_S	= srcs/

PATH_O	= bin/

VPATH	= ${PATH_I} ${PATH_S} ${PATH_O}

HDRS	= libft.h

FILES	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
		  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		  ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strjoin_free.c \
		  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
		  ft_check_base.c ft_atoi_base.c ft_itoa_base.c ft_putnbr_base.c \
		  ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlcat.c ft_isspace.c \
		  ft_strstr.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strncpy.c \
		  ft_split_whitespaces.c ft_strcmp.c ft_len_num.c ft_putchar_len.c \
		  ft_putstr_len.c ft_hexa.c ft_memdel.c ft_utoa_base.c ft_norm_all.c \
		  ft_ulltoa_base.c get_next_line.c 

FILES_B	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		  ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \

OBJS	= ${FILES:.c=.o}

OBJS_B	= ${FILES_B:.c=.o}

INC		= ${addprefix ${PATH_I}, ${HDRS}}

SRCS	= ${addprefix ${PATH_S}, ${FILES}}

TMP		= ${addprefix ${PATH_S}, ${OBJS}}

TMP_B	= ${addprefix ${PATH_S}, ${OBJS_B}}

BIN		= ${addprefix ${PATH_O}, ${OBJS}}

BIN_B	= ${addprefix ${PATH_O}, ${OBJS_B}}

CC		= clang

FLAGS	= -Wall -Wextra -Wall 

AR		= ar rcs

MKDIR	= mkdir -p

MV		= mv

RM		= rm -f

I_LIB	= ranlib


.SILENT:

_BLACK=\x1b[30m
_R=\x1b[31m
_G=\x1b[32m
_Y=\x1b[33m
_B=\x1b[34m
_P=\x1b[35m
_C=\x1b[36m
_E=\x1b[0m

all :		${NAME}

%.o : %.c	${INC}
	${CC} ${FLAGS} -I ${PATH_I} -o $@ -c $<
	echo "${_Y}compiling >>>${E}${_G} $<${_E}"

${NAME}	:	${TMP} | crea_b
	${MV} $? ${PATH_O}
	${AR} $@ ${BIN}
	echo "${_P}-----${_E}\t${_R}   creating archive${_E}\t${_P}-----${_E}"
	echo "${_P}-----${_E}\t${_R}    library index${_E}\t${_P}-----${_E}"
	${I_LIB} $@


bonus :		${TMP_B}
	${MV} $? ${PATH_O}
	${AR} ${NAME} ${BIN_B}
	echo "${_P}-----${_E}\t${_R}    library index${_E}\t${_P}-----${_E}"
	${I_LIB} ${NAME}

crea_b :
	${MKDIR} bin

clean : 
	${RM} ${BIN} ${BIN_B}
	echo "${_P}$@ ${_E}${_R}ecrase your objets !${_E}"

fclean :	clean
	${RM} ${NAME}
	echo "${_P}$@ ${_E}${_R}ecrase all !!!${_E}"

libft:	
		echo "\n"
		echo "$(_C)    _/       _/ _/            _/_/   _/$(_E)"
		echo "$(_C)   _/          _/_/_/      _/     _/_/_/_/$(_E)"
		echo "$(_C)  _/       _/ _/    _/  _/_/_/_/   _/$(_E)"
		echo "$(_C) _/       _/ _/    _/    _/       _/$(_E)"
		echo "$(_C)_/_/_/_/ _/ _/_/_/      _/         _/_/$(_E)"
		echo "${_B}                          is ready !!!${_E}"
		echo "\n"

monkey:
		clear
		echo "$(_R)        o$(_E)"
		echo "$(_R)     ' /_\ '$(_E)"
		echo "$(_Y)    - (o o) -$(_E)"
		echo "$(_G) -$(_E)$(_Y)ooO$(_E)$(_G)--$(_E)$(_Y)(_)$(_E)$(_G)--$(_E)$(_Y)Ooo$(_E)$(_G)-$(_E)"
		sleep 1
		clear
		echo "$(_R)        o$(_E)"
		echo "$(_R)     ' /_\ '$(_E)"
		echo "$(_Y)    - (o -) -$(_E)"
		echo "$(_G) -$(_E)$(_Y)ooO$(_E)$(_G)--$(_E)$(_Y)(_)$(_E)$(_G)--$(_E)$(_Y)Ooo$(_E)$(_G)-$(_E)"
		sleep 0.5
		clear
		echo "$(_R)        o$(_E)"
		echo "$(_R)     ' /_\ '$(_E)"
		echo "$(_Y)    - (o o) -$(_E)"
		echo "$(_G) -$(_E)$(_Y)ooO$(_E)$(_G)--$(_E)$(_Y)(_)$(_E)$(_G)--$(_E)$(_Y)Ooo$(_E)$(_G)-$(_E)"
		sleep 0.5

re:			fclean all

.PHONY:		monkey bonus clean fclean all re
