
NAME        := phonebook
CC         := c++
FLAGS    := -Wall -Wextra -Werror -std=c++98

SRCS        :=      Contact.class.cpp \
                          main.cpp \
                          PhoneBook.class.cpp \

OBJS        := ${SRCS:.cpp=.o}

.cpp.o:
	@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
	@${CC} ${FLAGS} -o ${NAME} ${OBJS}
	@echo "Compilation ✔️"

all:		${NAME}

bonus:		all

clean:
	@ ${RM} *.o */*.o */*/*.o

fclean:		clean
	@ ${RM} ${NAME}
	@ echo "Deleting ✔️"

re:			fclean all

.PHONY:		all clean fclean re


