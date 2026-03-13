NAME	= push_swap

LIBFT_ALL	= libft_all/src

RESET	= \033[0m
GREEN	= \033[0;32m
BLUE	= \033[0;34m
YELLOW	= \033[0;33m

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
TOTAL_FILES = $(words $(SRCS))
COUNT_FILE = .make_count

CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I. -I$(LIBFT_ALL)/libft -I$(LIBFT_ALL)/get_next_line -I$(LIBFT_ALL)/ft_printf

.SILENT:

all: init_count $(NAME)

init_count:
	echo 0 > $(COUNT_FILE)

$(NAME): $(OBJS)
	printf "\n$(BLUE)Linking $(NAME)...$(RESET)\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	printf "$(GREEN)Build complete: $(NAME)$(RESET)\n"

%.o: %.c
	count=$$(cat $(COUNT_FILE)); \
	count=$$((count + 1)); \
	echo $$count > $(COUNT_FILE); \
	printf "\r$(YELLOW)Compiling [$$count/$(TOTAL_FILES)]$(RESET)"
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	printf "$(BLUE)Cleaning object files...$(RESET)\n"
	rm -f $(OBJS)
	rm -f $(COUNT_FILE)
	printf "$(GREEN)Clean complete.$(RESET)\n"

fclean: clean
	printf "$(BLUE)Removing binary $(NAME)...$(RESET)\n"
	rm -f $(NAME)
	printf "$(GREEN)Full clean complete.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re init_count
