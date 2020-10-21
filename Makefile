##
## EPITECH PROJECT, 2020
## CPool EvalExpr
## File description:
## makefile
##

NAME	= eval_expr

CC	= gcc -g

RM	= rm -f

SRCS	= $(wildcard ./*.c) $(wildcard ./src/*.c)

OBJS	= $(SRCS:.c=.o)

CFLAGS 	+= -I ./include -Wall -Wextra
LDFLAGS += -L ./lib/my -lmy

all: $(NAME)

$(NAME): $(OBJS)
	 $(MAKE) -C ./lib/my
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re: fclean all

.PHONY: all clean fclean re
