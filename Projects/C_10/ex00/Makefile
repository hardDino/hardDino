SRCS	= ft_display_file.c

OBJS	= ${SRCS:.c=.o}

NAME 	= ft_display_file

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} ${SRCS} -o ${NAME} 

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
