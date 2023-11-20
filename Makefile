# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 10:04:39 by jhouyet           #+#    #+#              #
#    Updated: 2023/11/20 12:17:25 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_SRCS	= server.c 
CLIENT_SRCS	= client.c
HEADERS		= minitalk.h

CC			= clang -Wall -Werror -Wextra
CC_FLAGS	= -Llibft -lft

%.o: %.c ${HEADERS} libft/libft.a
			${CC} $< -c -o $@

all:		libft server client

libft:
			@make -C libft

server:		${SERVER_SRCS:.c=.o} ${HEADERS}
			${CC} ${SERVER_SRCS} ${CC_FLAGS} -o server

client:		${CLIENT_SRCS:.c=.o} ${HEADERS}
			${CC} ${CLIENT_SRCS} ${CC_FLAGS} -o client

clean:
			rm -rdf ${SERVER_SRCS:.c=.o} ${CLIENT_SRCS:.c=.o}
			@make clean -C libft

fclean:		clean
			rm -rdf client server
			@make fclean -C libft

re:			fclean all

.PHONY:		all libft clean fclean re

