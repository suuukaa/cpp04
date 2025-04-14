NAME = ex00
CC = c++ -std=c++98
CFLAGS =  -Wall -Wextra -Werror

SRC = Animal.cpp dog.cpp Cat.cpp main.cpp

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp Animal.hpp dog.hpp Cat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all