# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/12 18:35:14 by vpailhe           #+#    #+#              #
#    Updated: 2015/11/12 18:35:16 by vpailhe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=clang++

NAME = array 

CFLAGS += -Wall -Wextra -Werror

SRCS = Array.cpp \
	   main.cpp

OBJS = $(patsubst %.cpp,obj/%.o,$(SRCS))

CP = cp

RM = rm -f

all: $(NAME)

MKDIR ?= mkdir

obj/%.o: %.cpp
			$(MKDIR) -p $(dir $@)
						$(CXX) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

$(NAME): $(OBJS)
			$(CXX) -o $@ $(OBJS)

clean:
			$(RM) $(OBJS)
						$(RM) -r obj

fclean: clean
			$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
