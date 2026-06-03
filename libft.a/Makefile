NAME =	libft.a
CC =	cc
CFLAGS =	-Wall -Werror -Wextra
AR =	ar rcs
RM =	rm -f

SRCS =	ft_atoi.c \
	    ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_tolower.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)
%.o: %.c libft.h
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all
bonus: all
.PHONY: all clean fclean re bonus
