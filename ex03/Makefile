NAME = ex03
CC = c++ -std=c++98
CFLAGS =  -Wall -Wextra -Werror

SRC = AMateria.cpp Ice.cpp Cure.cpp Character.cpp main.cpp MateriaSource.cpp

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp AMateria.hpp  Character.hpp  Cure.hpp  ICharacter.hpp  IMateriaSource.hpp  Ice.hpp  MateriaSource.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all