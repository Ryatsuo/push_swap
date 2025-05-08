NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

LIBFT_SRC_DIR = src/libft
GNL_SRC_DIR = src/get_next_line
PRINTF_SRC_DIR = src/ft_printf

LIBFT_SRCS = $(wildcard $(LIBFT_SRC_DIR)/*.c)
GNL_SRCS = $(wildcard $(GNL_SRC_DIR)/*.c)
PRINTF_SRCS = $(wildcard $(PRINTF_SRC_DIR)/*.c)

SRCS = $(LIBFT_SRCS) $(GNL_SRCS) $(PRINTF_SRCS)
OBJS = $(SRCS:.c=.o)

HEADER = libft.h

AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I. -I$(LIBFT_SRC_DIR) -I$(GNL_SRC_DIR) -I$(PRINTF_SRC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re