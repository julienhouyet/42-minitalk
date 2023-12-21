# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 10:04:39 by jhouyet           #+#    #+#              #
#    Updated: 2023/12/21 10:45:54 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[1;33m
BLUE=\033[0;34m
ORANGE=\033[38;2;255;165;0m
NC=\033[0m 

SERVER_SRCS = src/server.c 
CLIENT_SRCS = src/client.c
HEADERS = include/minitalk.h

FTPRINTF = ft_printf/lib/libftprintf.a
FTPRINTF_PATH = ft_printf/

CC = cc -Wall -Werror -Wextra
CFLAGS = -I.
LDFLAGS = -Lft_printf/lib -lftprintf

OBJ_DIR = obj/

SERVER_OBJS = $(SERVER_SRCS:src/%.c=$(OBJ_DIR)%.o)
CLIENT_OBJS = $(CLIENT_SRCS:src/%.c=$(OBJ_DIR)%.o)

$(OBJ_DIR)%.o: src/%.c $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

all: ft_printf server client

ft_printf:
	@echo "$(YELLOW)Compiling ft_printf...$(NC)"
	@$(MAKE) -C $(FTPRINTF_PATH)

server: $(SERVER_OBJS)
	@echo "$(YELLOW)Compiling server...$(NC)"
	@$(CC) $(SERVER_OBJS) $(LDFLAGS) -o server
	@echo "$(BLUE)Server created!$(NC)"

client: $(CLIENT_OBJS)
	@echo "$(YELLOW)Compiling client...$(NC)"
	@$(CC) $(CLIENT_OBJS) $(LDFLAGS) -o client
	@echo "$(BLUE)Client created!$(NC)"

clean:
	@$(MAKE) clean -C $(FTPRINTF_PATH)
	@echo "$(ORANGE)Cleaning objects for Minitalk...$(NC)"
	@rm -rdf $(OBJ_DIR)
	@echo "$(GREEN)Cleaned Minitalk objects!$(NC)"

fclean: clean
	@echo "$(ORANGE)Fully cleaning ft_printf library...$(NC)"
	@$(MAKE) fclean -C $(FTPRINTF_PATH)  > /dev/null
	@echo "$(BLUE)Fully cleaned ft_printf!$(NC)"
	@echo "$(ORANGE)Removing executable files...$(NC)"
	@rm -f client server
	@echo "$(BLUE)Fully cleaned Minitalk project!$(NC)"

re: fclean all

.PHONY: all ft_printf server client clean fclean re