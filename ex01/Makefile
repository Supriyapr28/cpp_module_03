# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/01 11:58:17 by spaipur-          #+#    #+#              #
#    Updated: 2026/10/08 10:03:27 by spaipur-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= scavtrap
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++11
SRCS	= main.cpp claptrap.cpp scavtrap.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
