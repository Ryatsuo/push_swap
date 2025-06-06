NAME	= push_swap

LIBFT_ALL	= libft_all/src

PS_SRCS = main.c \
		  check_args.c \
		  find.c \
		  parsing.c \
		  instruction_a.c \
		  instruction_b.c \
		  instruction_a_b.c \
		  instruction_a_b_2.c \
		  algorythme.c \
		  algorythme_fill_a.c

LIBFT_SRCS = $(wildcard $(LIBFT_ALL)/libft/*.c)
GNL_SRCS   = $(wildcard $(LIBFT_ALL)/get_next_line/*.c)
PRINTF_SRCS= $(wildcard $(LIBFT_ALL)/ft_printf/*.c)

SRCS = $(PS_SRCS) $(LIBFT_SRCS) $(GNL_SRCS) $(PRINTF_SRCS)
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I. -I$(LIBFT_ALL)/libft -I$(LIBFT_ALL)/get_next_line -I$(LIBFT_ALL)/ft_printf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
