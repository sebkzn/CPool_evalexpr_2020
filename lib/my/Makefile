##
## EPITECH PROJECT, 2020
## CPool Day 10
## File description:
## makefile
##

NAME	= libmy.a

CC	= gcc -g

AR	= ar rcs

CP	= cp

RM	= rm -f

SRCS	= $(wildcard ./*.c)

OBJS	= $(SRCS:.c=.o)

CFLAGS += -I ../../include -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(LDFLAGS)
	 $(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
