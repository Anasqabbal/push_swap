NAME = push_swap
BONUS = checker
CC = cc
FILES = prepare_stack.c sort_3.c sort_5.c s_moves.c\
		r_moves.c rr_moves.c best_move.c best_move_tools.c\
		best_move_tools2.c push_swap_tools.c ps_atoi.c push_swap.c
FLAGS = -Wall -Wextra -Werror
O_FILES = $(FILES:.c=.o)
FILES_B = prepare_stack_bonus.c s_moves_bonus.c\
		r_moves_bonus.c rr_moves_bonus.c\
		push_swap_tools_bonus.c get_next_line_bonus.c\
		get_next_line_utils_bonus.c checker_bonus.c
O_FILES_B = $(FILES_B:_bonus.c=_bonus.o)

LIBFT_PATH = ./libft/
LIBFT = libft.a

all : $(LIBFT) $(NAME)

bonus: $(LIBFT) $(BONUS)

$(NAME) : $(O_FILES) ./libft/libft.a
	$(CC) $(FLAGS)  $(O_FILES) ./libft/libft.a -o $@

$(BONUS) : $(O_FILES_B) ./libft/libft.a
	$(CC) $(FLAGS) $(O_FILES_B) ./libft/libft.a -o $@

%_bonus.o : %_bonus.c ./libft/libft.h push_swap_bonus.h
	$(CC) $(FLAGS) -c $<

%.o : %.c ./libft/libft.h push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

$(LIBFT) :
	@$(MAKE) -C ./libft

clean:
	rm -f $(O_FILES) $(O_FILES_B)
	@$(MAKE) -C ./libft $@

fclean: clean
	rm -f $(NAME) $(BONUS)
	@$(MAKE) -C ./libft $@

re: fclean all