# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 18:57:14 by kpuwar            #+#    #+#              #
#    Updated: 2023/10/25 02:38:35 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98 #-fsanitize=address

INCLUDES = Contact.hpp PhoneBook.hpp
SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJS = ${SRCS:.cpp=.o}

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re