SRCS	=	main.c \
			utils/utils.c \
			utils/exit_prog.c \
			utils/parse_numbers.c \
			utils/swap.c \
			utils/algorythms.c \
			utils/rotate.c \
			utils/reverserotate.c \
			utils/push.c \
			utils/big_algo.c \
			
OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CC		= cc

CFLAGS	= -Wall -Wextra -Werror -g #-fsanitize=address

RM		= rm -rf


FT_PRINTF = ft_printf/libftprintf.a



all: $(NAME)

$(NAME): $(OBJS) $(FT_PRINTF)
		$(CC) $(CFLAGS) $^ -o $@

$(FT_PRINTF):
		make -C ft_printf

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $^ -o $@


clean: 
	$(RM) $(OBJS)
	make clean -C ft_printf

fclean: clean
		$(RM) $(NAME) $(OBJS)
		make fclean -C ft_printf

re: fclean all

.PHONY: all clean fclean re