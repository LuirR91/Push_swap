# Standard
NAME	= push_swap

# Directories
LIBFT	= 
INC		= .

# Compiler and CFlags
CC		= @cc
CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -f

# Source Files
COMMANDS_DIR	= 

PUSH_SWAP_DIR	= 

# Concatenate all source files
SRCS	= $(COMMANDS_DIR) $(PUSH_SWAP_DIR)

# Apply the pattern substitution to each source file in SRC and produce
# a corresponding list of object files in the OBJ_DIR
OBJ	=	

# Build rules
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@echo ""
	@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)
	@make clean -C ./libft

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)

re:	fclean all

# Phony targets represent actions not files
.PHONY:	all clean fclean re
