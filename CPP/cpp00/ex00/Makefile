# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 10:30:24 by vpoirot           #+#    #+#              #
#    Updated: 2023/10/02 15:14:45 by vpoirot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  := megaphone
CC := c++
FLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := megaphone.cpp \

OBJS := ${SRCS:.cpp=.o}

.cpp.o:
	@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
	@${CC} ${FLAGS} -o ${NAME} ${OBJS}
	@echo "$(NAME) created ✔️"

all: ${NAME}

clean:
	@ ${RM} *.o */*.o */*/*.o
	@ echo "Deleting $(NAME) objs ✔️"

fclean:		clean
	@ ${RM} ${NAME}
	@ echo "Deleting $(NAME) binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re
