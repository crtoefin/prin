NAME	=	libftprintf.a

NAME	=	libftprintf.a

SRCS	=	ft_printf.c		ft_hex.c		ft_put.c

DEL		=	ft_printf.o		ft_hex.o		ft_put.o	libftprintf.a

HEADER	=	ft_printf.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re

all	:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o	:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(DEL)

fclean	:	clean
	@$(RM) $(NAME)

re	:	fclean all