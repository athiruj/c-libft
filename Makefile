CC			=	cc
CCFLAGS		=	-Wall -Wextra -Werror
AR			=	ar -src
RM			=	rm -rf

SRCSFILE 	= 	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				\
		 	 	ft_toupper.c \
				ft_tolower.c \
				ft_atoi.c \
				\
				ft_itoa.c \
				\
				ft_strlen.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strncmp.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strnstr.c \
				\
				ft_substr.c \
				ft_strjoin.c \
				ft_strdup.c \
				ft_strtrim.c \
				ft_split.c \
				ft_strmapi.c \
				ft_striteri.c \
				\
				ft_bzero.c \
				ft_calloc.c \
				ft_memset.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memchr.c \
		 	 	ft_memcmp.c \
				\
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c \
				
BONUSFILE	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c    
			
OBJS 		=	$(SRCSFILE:.c=.o)
BONUSOBJS	=	$(BONUSFILE:.c=.o)
HEADER 		= 	libft.h
NAME 		=	libft.a

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

bonus: all $(BONUSOBJS)
	$(AR) $(NAME) $(BONUSOBJS)

%.o: %.c libft.h Makefile
	$(CC) $(CCFLAGS) -I $(HEADER) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re