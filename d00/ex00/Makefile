# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 17:59:38 by vpailhe           #+#    #+#              #
#    Updated: 2015/11/02 18:06:13 by vpailhe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=clang++

NAME = megaphone

CFLAGS += -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = $(patsubst %.cpp,obj/%.o,$(SRCS))

CP = cp

RM = rm -f

all: $(NAME)

MKDIR ?= mkdir

obj/%.o: %.cpp
		$(MKDIR) -p $(dir $@)
			$(CXX) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
		$(CXX) -o $@ $(OBJS)

clean:
		$(RM) $(OBJS)
			$(RM) -r obj

fclean: clean
		$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
