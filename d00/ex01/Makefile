CXX=clang++

NAME = PhoneBook

CFLAGS += -Wall -Wextra -Werror

SRCS = main.cpp\
	   User.class.cpp 

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
