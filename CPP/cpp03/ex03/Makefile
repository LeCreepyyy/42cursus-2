# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 11:37:50 by vpoirot           #+#    #+#              #
#    Updated: 2023/10/19 11:38:14 by vpoirot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := diamondtrap
CC         := c++
FLAGS    := -Wall -Wextra -Werror -std=c++98
SRCS        :=      ClapTrap.cpp \
                          DiamondTrap.cpp \
                          FragTrap.cpp \
                          main.cpp \
                          ScavTrap.cpp \

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
	@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
	@${CC} ${FLAGS} -o ${NAME} ${OBJS}
	@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
	@ ${RM} *.o */*.o */*/*.o
	@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
	@ ${RM} ${NAME}
	@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


