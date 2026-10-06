# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/01 11:58:17 by spaipur-          #+#    #+#              #
#    Updated: 2026/10/06 13:24:32 by spaipur-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

FlAGS = -Wall -Wextra -Werror -std=c++11
src = main.cpp claptrap.cpp scavtrap.cpp diamondtrap.cpp

$(NAME): $(src)
	@c++ $(FlAGS) $(src) -o $(NAME)
	
all: $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
