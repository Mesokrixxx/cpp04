NAME = polymorphism

CC = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -I./
LDFLAGS =

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CXXFLAGS) -o $(NAME) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

run: all
	./$(NAME)

re: fclean all

ren: fclean run

.PHONY: all clean fclean run re ren
