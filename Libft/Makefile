# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 18:23:32 by alex              #+#    #+#              #
#    Updated: 2016/11/07 14:46:52 by malexand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAG = -Wall -Werror -Wextra

SDIR =		./srcs/
SRCS =		$(notdir $(shell ls *.c))
SRCC =		$(addprefix $(SDIR),$(SRCS))

IDIR =		./incs/
INCS =		$(notdir $(shell ls *.h))
INCC =		$(addprefix $(IDIR),$(INCS))

ODIR =		./objs/
OBJS =		$(SRCS:.c=.o)
OBCC =		$(addprefix $(ODIR),$(OBJS))


all:$(NAME)

$(NAME): $(OBJS)
	@echo "Génération de la lib..."
	@ar rc libft.a $(OBJS)
	@ranlib $@

%.o: %.c
	@echo "Génération du fichier objet $@..."
	@gcc $^ $(CFLAG) -c -o $@ -I.incs/libft.h

clean:
	@echo "Suppression des fichiers objets et des fichiers résiduels du programme..."
	@rm -f $(OBJS)

fclean: clean
	@echo "Suppression de l'exécutable..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
