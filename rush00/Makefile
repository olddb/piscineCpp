NAME = ft_retro

FLAGS = -Wall -Wextra -Werror

CUR = -lncurses

SRC =	Item.class.cpp \
		Missile.class.cpp \
		Obstacle.class.cpp \
		display.cpp \
		game.cpp \
		main.cpp \

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling \t\
	\033[4m\033[95md\033[93mo\033[32mn\033[96me \033[91m!\033[0m"
	@clang++ $(FLAGS) -o $(NAME) $(OBJ) $(CUR)
	@echo "$(NAME) was created for you \t\
		\033[4m\033[95md\033[93mo\033[32mn\033[96me \033[91m!\033[0m"

%.o:%.cpp
	@clang++ $(FLAGS) -c $<

clean:
	@rm -f $(OBJ)
	@echo "Cleaning $(NAME) \t\
		\033[4m\033[95md\033[93mo\033[32mn\033[96me \033[91m!\033[0m"

.PHONY: clean fclean

fclean: clean
	@rm -f $(NAME)
	@echo "Fcleaning $(NAME) \t\
		\033[4m\033[95md\033[93mo\033[32mn\033[96me \033[91m!\033[0m"

re: fclean all

