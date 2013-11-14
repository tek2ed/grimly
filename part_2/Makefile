##
## Makefile for Makefile in /home/amoure_a//maths/102chiffrement
## 
## Made by alix amoureux
## Login   <amoure_a@epitech.net>
## 
## Started on  Tue Nov 27 23:36:05 2012 alix amoureux
## Last update Thu Nov 14 11:18:44 2013 Alix Amoureux
##

CC	=	gcc -g

RM	= 	rm -f

NAME	= 	grimly_gen

SRCS	= 	main.c \
		base_fcts.c \
		my_getnbr.c \
		error.c \
		lab.c \

OBJS	= $(SRCS:.c=.o)

CFLAG	= -Wall -ansi

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
