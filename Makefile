NAME	= push_swap

SRCS	= main.c \
		  check_args.c \
		  find.c \
		  parsing.c \
		  instruction_a.c \
		  instruction_b.c \
		  instruction_a_b.c \
		  instruction_a_b_2.c \
		  algorythme.c \
		  algorythme_fill_a.c \

OBJS	= $(SRCS:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

LIBFT_DIR	= libft_all
LIBFT		= $(LIBFT_DIR)/libft.a

INCLUDES	= -I. -I$(LIBFT_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
