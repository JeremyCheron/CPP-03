# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 09:03:52 by jcheron           #+#    #+#              #
#    Updated: 2025/02/27 11:12:55 by jcheron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -Iincludes -std=c++98 -g
SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/ClapTrap.cpp $(SRC_DIR)/ScavTrap.cpp $(SRC_DIR)/FragTrap.cpp
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/ClapTrap.o $(OBJ_DIR)/ScavTrap.o $(OBJ_DIR)/FragTrap.o

NAME = Repetitive_Work

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
