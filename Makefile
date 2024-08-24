# COMPILER #
CC			=	cc
CCFLAGS		=	-Wall -Wextra -Werror -std=c99
AR			=	ar -src
RM			=	rm -rf

# SOURCE #
# SRCSPATH 	= 	./srcs/
SRCSFILE 	= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		 	 	ft_memset.c  ft_bzero.c   ft_memcpy.c  ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		 	 	ft_toupper.c ft_tolower.c ft_strchr.c  ft_strrchr.c ft_strncmp.c ft_memchr.c \
		 	 	ft_memcmp.c  ft_strnstr.c ft_atoi.c    ft_calloc.c  ft_strdup.c  ft_substr.c \
		 	 	ft_strjoin.c ft_strtrim.c ft_split.c   ft_itoa.c    ft_strmapi.c ft_striteri.c \
				\
		 	 	ft_is.c      ft_isblank.c  ft_iscntrl.c ft_isgraph.c ft_islower.c ft_ispunct.c ft_isspace.c \
				ft_isupper.c ft_isxdigit.c ft_strnlen.c ft_strcat.c ft_strncat.c ft_strcpy.c \
		 	 	ft_strncpy.c ft_strcmp.c  #ft_bzero.c   ft_memcpy.c  ft_memmove.c ft_strlcpy.c ft_strlcat.c 
			
OBJS 		=	$(SRCSFILE:.c=.o)
HEADER 	= 	libft.h
NAME 		=	libft.a

# RULE #

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) -I $(HEADER) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
