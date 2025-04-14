NAME = ex02
CC = c++ -std=c++98
CFLAGS =  -Wall -Wextra -Werror

SRC = Animal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp Animal.hpp dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all