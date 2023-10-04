SRCS 	   		= \
				ft_strlen \
				ft_memmove \
				ft_memcpy \
				ft_strlcpy \
				ft_strlcat \
				ft_isalpha \
				ft_isdigit \
				ft_isalnum \
				ft_isascii \
				ft_isprint \
				ft_memset \
				ft_bzero \
				ft_toupper \
				ft_tolower \
				ft_strchr \
				ft_strrchr \
				ft_strncmp \
				ft_memchr \
				ft_memcmp \
				ft_strnstr \
				ft_atoi \
				ft_calloc \
				ft_strdup \
				ft_substr \
				ft_strjoin \
				ft_strtrim \
				ft_split \
				ft_itoa \
				ft_strmapi \
				ft_striteri \
				ft_putchar_fd \
				ft_putstr_fd \
				ft_putendl_fd \
				ft_putnbr_fd \

B_SRCS			= \
				ft_lstnew \
				ft_lstadd_front \
				ft_lstsize \
				ft_lstlast \
				ft_lstadd_back \
				ft_lstdelone \
				ft_lstclear \
				ft_lstiter \
				ft_lstmap \

OBJS			= $(SRCS:%=%.o)
B_OBJS			= $(B_SRCS:%=%.o)

ifdef WITH_BONUS
	OBJS += $(B_OBJS)
endif

NAME			= libft.a
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
				${AR} r $@ $?

bonus:
				make WITH_BONUS=1 all

clean:
				$(RM) $(OBJS) $(B_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
