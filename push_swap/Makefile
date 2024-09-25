# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 22:05:19 by luiribei          #+#    #+#              #
#    Updated: 2024/09/25 22:30:10 by luiribei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME	= push_swap

# Directories
INC		= inc/
SRC_DIR	= src/
OBJ_DIR = obj/

# Compiler and CFlags
CC		= @cc
CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -f

# Source Files
COMMANDS_DIR	=	$(SRC_DIR)commands/push.c \
					$(SRC_DIR)commands/reverse_rotate.c \
					$(SRC_DIR)commands/rotate.c \
					$(SRC_DIR)commands/swap.c \

SORTING_DIR		=	$(SRC_DIR)sorting/sort_stacks.c \
					$(SRC_DIR)sorting/sort_three.c \

UTILS_DIR		=	$(SRC_DIR)utils/a_to_b.c \
					$(SRC_DIR)utils/b_to_a.c \
					$(SRC_DIR)utils/errors.c \
					$(SRC_DIR)utils/stack_initiation_a.c \
					$(SRC_DIR)utils/stack_utils.c \

# Concatenate all source files
SRCS			=	$(COMMANDS_DIR) $(SORTING_DIR) $(UTILS_DIR)

# Apply the pattern substitution to each source file in SRC and produce
# a corresponding list of object files in the OBJ_DIR
OBJ				=	$(pathsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS))

# Build rules
all:			$(NAME)

$(NAME):		$(OBJ)
					@echo "Created .o files"
					@$(CC) $(CFLAGS) $(INC) $(OBJ) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
				$(RM) -r $(OBJ_DIR)

fclean:		clean
				@$(RM) $(NAME)

re:	fclean all

# Phony targets represent actions not files
.PHONY:	all clean fclean re
