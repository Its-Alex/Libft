# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malexand <malexand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 18:23:32 by malexand          #+#    #+#              #
#    Updated: 2017/09/26 18:28:28 by malexand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME = libft.a

CC 					= gcc
DEBUG				= no
OS 					= $(shell uname -s)
DEPEND_FRAGMENT 	= Make.depend
MAKEFLAGS 			+= --silent

ifeq ($(DEBUG), yes)
	CFLAGS =		-Wall -Werror -Wextra -g -ggdb -fsanitize=address -v
	CXXFLAGS =
	CPPFLAGS =
else
	CFLAGS =		-Wall -Werror -Wextra -O3
	CXXFLAGS =
	CPPFLAGS =
endif

ifeq ($(OS), Linux)
	LFLAGS =
	INCLUDE =		-I./incs
else
	LFLAGS =
	INCLUDE =		-I./incs
endif

OUT_DIR 			= objs
SRC_DIR 			= srcs
INC_DIR				= incs

SDIR =				srcs/
SRCS =				ft_atoi.c ft_bzero.c ft_error.c ft_freetab.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_itoa_base.c ft_lstadd.c \
					ft_lstaddend.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
					ft_lststr_sort.c ft_lststr_sortrev.c ft_max.c ft_memalloc.c ft_memccpy.c \
					ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c \
					ft_min.c ft_miniprintf.c ft_putchar.c ft_putchar_fd.c ft_putdbl.c ft_putendl.c \
					ft_putendl_fd.c ft_putlong.c ft_putlong_fd.c ft_putnbr.c ft_putnbr_fd.c \
					ft_putstr.c ft_putstr_color.c ft_putstr_fd.c ft_sort_int_tab.c ft_strcat.c \
					ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c \
					ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strjoin_free.c \
					ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
					ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strrev.c \
					ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_swap.c ft_tolower.c \
					ft_toupper.c ft_get_next_line.c ft_putdbl_fd.c
SRCC =				$(addprefix $(SDIR),$(SRCS))

ODIR =				objs/
ifeq ($(CC), gcc)
	OBJS = 			$(SRCS:.c=.o)
else
	OBJS = 			$(SRCS:.cpp=.o)
endif
OBCC =				$(addprefix $(ODIR),$(OBJS))

all: dirs $(DEPEND_FRAGMENT) $(LIB_NAME)

-include $(DEPEND_FRAGMENT)

$(LIB_NAME): $(OBCC)
ifeq ($(OS), Linux)
	@ar rc $(LIB_NAME) $(OBCC)
	@ranlib $@
	@echo -e "\x1b[36m  + Compile program:\x1B[0m $@"
else
	@ar rc $(LIB_NAME) $(OBCC)
	@ranlib $@
	@echo "\x1b[36m  + Compile program:\x1B[0m $@"
	@echo "\x1B[31m\c"
	@norminette srcs/* incs/* | grep -B 1 "Error" || true
	@echo "\x1B[0m\c"
endif

$(ODIR)%.o: $(SDIR)%.c
	$(CC) $< $(CFLAGS) -c -o $@ $(INCLUDE)
ifeq ($(OS), Linux)
	@echo -e "\r\x1B[32m  + Compile:\x1B[0m $(notdir $<)"
else
	@echo "\r\x1B[32m  + Compile:\x1B[0m $(notdir $<)"
endif

$(ODIR)%.o: $(SDIR)%.cpp
	$(CC) $< $(CXXFLAGS) -c -o $@ $(INCLUDE)
ifeq ($(OS), Linux)
	@echo -e "\r\x1B[32m  + Compile:\x1B[0m $(notdir $<)"
else
	@echo "\r\x1B[32m  + Compile:\x1B[0m $(notdir $<)"
endif

$(DEPEND_FRAGMENT): $(SRCC)
	@touch $(DEPEND_FRAGMENT)
	@makedepend -f $(DEPEND_FRAGMENT) -- -Y -O -DHACK $(CFLAGS) $(CXXFLAGS) $(INCLUDE) -- $(SRCC) >& /dev/null
	@sed 's/.\/srcs/.\/objs/g' $(DEPEND_FRAGMENT) > $(DEPEND_FRAGMENT).bak
	@mv $(DEPEND_FRAGMENT).bak $(DEPEND_FRAGMENT)

dirs: $(OUT_DIR) $(SRC_DIR) $(INC_DIR)

$(OUT_DIR):
	@mkdir -p $(OUT_DIR)

$(SRC_DIR):
	@mkdir -p $(SRC_DIR)

$(INC_DIR):
	@mkdir -p $(INC_DIR)

clean:
	@rm -rf $(OUT_DIR) $(DEPEND_FRAGMENT)
ifeq ($(OS), Linux)
	@echo -e "\x1B[31m  - Remove:\x1B[0m objs"
else
	@echo "\x1B[31m  - Remove:\x1B[0m objs"
endif

fclean: clean
	@rm -f $(LIB_NAME)
ifeq ($(OS), Linux)
	@echo -e "\x1B[31m  - Remove:\x1B[0m $(LIB_NAME)"
else
	@echo "\x1B[31m  - Remove:\x1B[0m $(LIB_NAME)"
endif

re: fclean
	make

.PHONY: all clean fclean re run dirs cleanlib delete
