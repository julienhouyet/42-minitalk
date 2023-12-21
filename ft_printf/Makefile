# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 08:29:30 by jhouyet           #+#    #+#              #
#    Updated: 2023/12/21 09:44:56 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[1;33m
BLUE=\033[0;34m
ORANGE=\033[38;2;255;165;0m
NC=\033[0m

NAME = libftprintf.a

SRC_DIR = src/
OBJ_DIR = obj/
LIB_DIR = lib/
INC_DIR = include/
LIBNAME = $(LIB_DIR)$(NAME)

SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
IFLAGS = -I.

TOTAL_FILES 	:= $(words $(SRC))
CURRENT_FILE 	:= 0

define progress_bar_libft
    @$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE) + 1))))
    @printf "\r$(YELLOW)Compiling... [%-$(TOTAL_FILES)s] %d/%d $(NC)" $$(for i in $$(seq 1 $(CURRENT_FILE)); do printf "#"; done) $(CURRENT_FILE) $(TOTAL_FILES)
	@if [ $(CURRENT_FILE) -eq $(TOTAL_FILES) ]; then echo ""; fi
endef

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	$(call progress_bar_libft)

all: $(LIBNAME)

$(LIBNAME): $(OBJ)
	@echo "$(GREEN)Creating ft_printf library $(LIBNAME)...$(NC)"
	@mkdir -p $(LIB_DIR)
	@ar rc $(LIBNAME) $(OBJ)
	@echo "$(BLUE)Library ft_printf created!$(NC)"

clean:
	@echo "$(ORANGE)Cleaning objects ft_printf...$(NC)"
	@$(RM) $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN)Cleaned objects ft_printf!$(NC)"

fclean: clean
	@echo "$(ORANGE)Fully cleaning ft_printf...$(NC)"
	@$(RM) $(LIBNAME)
	@rm -rf $(LIB_DIR)
	@echo "$(BLUE)Fully cleaned ft_printf!$(NC)"

re: fclean all

.PHONY: all clean fclean re