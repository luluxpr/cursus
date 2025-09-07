NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	print_char.c \
			print_str.c \
			print_digit.c \
			print_hexa.c \
			print_ptr.c 
			

	
		
OBJ = $(SRC:.c=.o)

INCLUDE = libftprintf.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

