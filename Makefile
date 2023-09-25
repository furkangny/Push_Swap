NAME = push_swap

SRCS =  main.c stack_func1.c stack_func2.c  control_edit.c utils.c \
		three_five.c radix.c free.c

OBJS = $(SRCS:.c=.o)

CC = @gcc -ggdb
MFLAGS =  ./libft/libft.a
AFLAGS =  -Wall -Wextra -Werror ./libft
CFLAGS =  -Wall -Wextra -Werror

RM = rm -rf

all :$(MFLAGS) $(NAME)

$(MFLAGS):
	@make -C ./libft

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(MFLAGS) $(CFLAGS) -o $(NAME)

fclean : clean
	@$(RM) ./libft/*.a
	@$(RM) ./*.a
	@$(RM) $(NAME)

clean :
	@$(RM) ./libft/*.o
	@$(RM) ./*.o
	@$(RM) $(OBJS)

re : fclean all

.PHONY : all fclean clean re
