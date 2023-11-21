# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 10:04:39 by jhouyet           #+#    #+#              #
#    Updated: 2023/11/21 09:41:16 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_SRCS = server.c 
CLIENT_SRCS = client.c
HEADERS = minitalk.h

CC = clang -Wall -Werror -Wextra
CC_FLAGS = -Lft_printf -lftprintf

%.o: %.c ${HEADERS} ft_printf/libftprintf.a
	${CC} $< -c -o $@

all: ft_printf server client

ft_printf:
	@make -C ft_printf

server: ${SERVER_SRCS:.c=.o} ${HEADERS}
	${CC} ${SERVER_SRCS} ${CC_FLAGS} -o server

client: ${CLIENT_SRCS:.c=.o} ${HEADERS}
	${CC} ${CLIENT_SRCS} ${CC_FLAGS} -o client

clean:
	rm -rdf ${SERVER_SRCS:.c=.o} ${CLIENT_SRCS:.c=.o}
	@make clean -C ft_printf

fclean: clean
	rm -rdf client server
	@make fclean -C ft_printf

re: fclean all

.PHONY: all ft_printf clean fclean re
