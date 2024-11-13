NAME	=	libc.a

SRCS	=	my_isalpha.c \
	my_memcpy.c \
	my_strlcat.c \
	my_toupper.c \
	my_isascii.c \
	my_memmove.c \
	my_strlcpy.c \
	my_isdigit.c \
	my_bzero.c \
	my_isprint.c \
	my_putendl_fd.c \
	my_strnstr.c \
	my_memset.c \
	my_calloc.c \
	my_memchr.c \
	my_strncmp.c \
	my_isalnum.c \
	my_memcmp.c \
	my_strchr.c \
	my_tolower.c \
	my_strlen.c \
	my_putstr_fd.c \
	my_putchar_fd.c\
	my_putnbr_fd.c\
	my_strdup.c\
	my_substr.c\
	my_strjoin.c\
	my_strtrim.c\
	my_striteri.c\
	my_strmapi.c\
	my_strrchr.c\
	my_atoi.c\
	my_itoa.c\
	my_split.c

OBJS = $(SRCS:.c=.o)

CC	=	gcc
RM	=	rm -f
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
