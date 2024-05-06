# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 18:12:04 by yliu              #+#    #+#              #
#    Updated: 2024/05/06 21:34:55 by yliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compiler option and etc
NAME			= libft.a
CFLAGS			= -Wall -Wextra -Werror
MMD_MP			:= -MMD -MP
RM				= rm -rf
ECHO			= printf

#directory
SRCS_DIR		= ./src/
OBJS_DIR		= ./obj/
INCLUDE			= ./inc/

#files
# SRCS 			= $(wildcard $(SRCS_DIR)ft_*/*.c)
DEP				:= $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.c=.d))

SRCS			=\
				 ./src/ft_dl_lst/ft_dl_lstcreate_ope.c \
				 ./src/ft_dl_lst/ft_dl_lstclear.c \
				 ./src/ft_dl_lst/ft_dl_lstdelone.c \
				 ./src/ft_dl_lst/ft_dl_lstfirst.c \
				 ./src/ft_dl_lst/ft_dl_lstlast.c \
				 ./src/ft_dl_lst/ft_dl_lstsize.c \
				 ./src/ft_dl_lst/ft_dl_lstfilter.c \
				 ./src/ft_dl_lst/ft_dl_lstmap.c \
				 ./src/ft_dl_lst/ft_dl_lstreduce.c \
				 ./src/ft_dl_lst/ft_dl_pf_lst.c \
				 \
				 ./src/ft_gnl/get_next_line.c \
				 ./src/ft_gnl/get_next_line_utils.c \
				 \
				 ./src/ft_is/ft_isalnum.c \
				 ./src/ft_is/ft_isalpha.c \
				 ./src/ft_is/ft_isascii.c \
				 ./src/ft_is/ft_isdigit.c \
				 ./src/ft_is/ft_isprint.c \
				 \
				 ./src/ft_is2/ft_isblank.c \
				 ./src/ft_is2/ft_isquote.c \
				 ./src/ft_is2/ft_iswildcard.c \
				 ./src/ft_is2/ft_isreserved_word.c \
				 ./src/ft_is2/ft_ismetacharacter.c \
				 ./src/ft_is2/ft_isspecial_char.c \
				 \
				 ./src/ft_lst/ft_lstadd_back.c \
				 ./src/ft_lst/ft_lstadd_front.c \
				 ./src/ft_lst/ft_lstclear.c \
				 ./src/ft_lst/ft_lstdelone.c \
				 ./src/ft_lst/ft_lstiter.c \
				 ./src/ft_lst/ft_lstlast.c \
				 ./src/ft_lst/ft_lstmap.c \
				 ./src/ft_lst/ft_lstsize.c \
				 \
				 ./src/ft_mem/ft_bzero.c \
				 ./src/ft_mem/ft_calloc.c \
				 ./src/ft_mem/ft_memchr.c \
				 ./src/ft_mem/ft_memcmp.c \
				 ./src/ft_mem/ft_memcpy.c \
				 ./src/ft_mem/ft_memmove.c \
				 ./src/ft_mem/ft_memset.c \
				 \
				 ./src/ft_printf/ft_printf.c \
				 ./src/ft_printf/ft_dprintf.c \
				 ./src/ft_printf/ft_printf_calculate_len_utils.c \
				 ./src/ft_printf/ft_printf_put_utiles.c \
				 ./src/ft_printf/ft_printf_utiles.c \
				 \
				 ./src/ft_put/ft_putchar_fd.c \
				 ./src/ft_put/ft_putendl_fd.c \
				 ./src/ft_put/ft_putnbr_fd.c \
				 ./src/ft_put/ft_putstr_fd.c \
				 \
				 ./src/ft_str/ft_split.c \
				 ./src/ft_str/ft_strchr.c \
				 ./src/ft_str/ft_strdup.c \
				 ./src/ft_str/ft_striteri.c \
				 ./src/ft_str/ft_strjoin.c \
				 ./src/ft_str/ft_strlcat.c \
				 ./src/ft_str/ft_strlcpy.c \
				 ./src/ft_str/ft_strlen.c \
				 ./src/ft_str/ft_strmapi.c \
				 ./src/ft_str/ft_strncmp.c \
				 ./src/ft_str/ft_strnstr.c \
				 ./src/ft_str/ft_strrchr.c \
				 ./src/ft_str/ft_strtrim.c \
				 ./src/ft_str/ft_substr.c \
				 \
				 ./src/ft_to/ft_atoi.c \
				 ./src/ft_to/ft_itoa.c \
				 ./src/ft_to/ft_tolower.c \
				 ./src/ft_to/ft_toupper.c \
				 \
				 ./src/ft_str2/ft_strjooin.c \
				 ./src/ft_str2/ft_strcmp.c \
				 \
				 ./src/ft_math/ft_min.c \
				 \
				 ./src/ft_utils/ft_xcalloc.c \
				 ./src/ft_utils/ft_free_list.c \
				 \

OBJS			= $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.c=.o))
HEADERS			=	./inc/ft_printf.h \
					./inc/get_next_line.h \
					./inc/libft.h \
					\
					./inc/ft_is.h \
					./inc/ft_str.h \
					./inc/ft_utils.h \
					./inc/ft_put.h \
					\
					./inc/ft_str2.h \
					./inc/ft_is2.h \
					./inc/ft_math.h

#color and line
DEF_COLOR		:=	\033[0;39m
ORANGE			:=	\033[0;33m
GRAY			:=	\033[0;90m
RED				:=	\033[0;91m
GREEN			:=	\033[1;92m
YELLOW			:=	\033[1;93m
BLUE			:=	\033[0;94m
MAGENTA			:=	\033[0;95m
CYAN			:=	\033[0;96m
WHITE			:=	\033[0;97m

-				:= ━
FILE_NUM		= $(words $(SRCS))
LINE			= $(shell yes $- | head -n $(BAR_LEN) | tr -d '\n'; echo)
DIFF_LINE		= $(shell yes $- | head -n $(DIFF) | tr -d '\n'; echo)
BAR_LEN			= 42

.PHONY:			all
all:			$(NAME)

$(NAME):		status_check

.PHONY:			status_check
status_check:
				@$(ECHO) "$(DEF_COLOR)$(BLUE)[LIBFT]\t\t$(NAME) \t$(WHITE)checking...$(DEF_COLOR)\n"
				@$(ECHO) "\e$(GRAY)$(LINE)\r$(DEF_COLOR)"
				@make -s compile

.PHONY:			compile
compile:		$(OBJS)
				@$(AR) crs $(NAME) $?
				@$(ECHO) "\r\e$(GREEN)$(LINE)$(DEF_COLOR)"
				@$(ECHO) "$(GREEN) ‣ 100%% $(DEF_COLOR)\n"
				@$(ECHO) "$(DEF_COLOR)$(BLUE)[LIBFT]\t\t$(NAME) \t$(GREEN)compiled ✓$(DEF_COLOR)\n"

ITER			= 0
DIFF			= 0
PREV			= 0

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(MMD_MP) -I $(INCLUDE) -c $< -o $@
				$(eval ITER=$(shell echo $$(($(ITER) + 1))))
				$(eval NEW=$(shell echo $$(($(ITER) * $(BAR_LEN) / $(FILE_NUM)))))
				$(eval DIFF=$(shell echo $$(($(NEW) - $(PREV)))))
				$(eval PREV=$(shell echo $$(($(NEW)))))
				i=1; \
				while [ $$i -le $(DIFF) ]; do \
					$(ECHO) "$(RED)$-$(DEF_COLOR)"; \
					i=$$((i + 1)); \
				done


-include $(DEP)
#other cmds

.PHONY:			clean
clean:
				@$(RM) $(OBJS_DIR)
				@$(ECHO) "$(DEF_COLOR)$(BLUE)[LIBFT]\t\tobject files \t$(GREEN)deleted ✓$(DEF_COLOR)\n"

.PHONY:			fclean
fclean:			clean
				@$(RM) $(NAME)
				@$(ECHO) "$(DEF_COLOR)$(BLUE)[LIBFT]\t\t$(NAME) \t$(GREEN)deleted ✓$(DEF_COLOR)\n"

.PHONY:			re
re:				fclean
				@make -s

.PHONY:			norm
norm:
				@norminette $(SRCS)
				@norminette $(HEADERS)
				@norminette -v

.PHONY:			format_norm
format_norm:
				@c_formatter_42 $(SRCS)
				@c_formatter_42 $(HEADERS)
				@make norm

.PHONY:			debug
debug:			$(CFLAGS) += -g -fsanitize=address -fsanitize=leaks\
				fsanitize=integer

.PHONY:			bonus 

include Makefile_tester.mk
