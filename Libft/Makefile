# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 18:23:32 by alex              #+#    #+#              #
#    Updated: 2016/11/04 12:45:50 by malexand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAG = -Wall -Werror -Wextra

SDIR =		./srcs/
SRCS =		$(notdir $(shell ls srcs/))
SRCC =		$(addprefix $(SDIR),$(SRCS))

IDIR =		./incs/
INCS =		$(notdir $(shell ls includes/))
INCC =		$(addprefix $(IDIR),$(INCS))

ODIR =		./objs/
OBJS =		$(SRCS:.c=.o)
OBCC =		$(addprefix $(ODIR),$(OBJS))


all:$(NAME)

$(NAME): $(OBCC)
	@echo "Génération de la lib..."
	@ar rc libft.a $(OBCC)
	@ranlib $@

$(ODIR)%.o: $(SDIR)%.c
	@echo "Génération du fichier objet $@..."
	@gcc $^ $(CFLAG) -c -o $@ -I.incs/

clean:
	@echo "Suppression des fichiers objets et des fichiers résiduels du programme..."
	@rm -f $(OBCC)

fclean: clean
	@echo "Suppression de l'exécutable..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
