NAME = phonebook
# SOURCES = main.cpp phonebook.cpp
SOURCES = test.cpp Contact.cpp PhoneBook.cpp ft_chop.cpp

OBJS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o))
SRCS = $(addprefix $(SRC_DIR)/, $(SOURCES))

SRC_DIR = .
OBJ_DIR = objs
INC_DIR = .


CC = c++
CFLAGS = -Wall -Werror -Wextra # -I $(INC_DIR)

all : $(NAME)

fclean : 
	rm -rf $(OBJ_DIR)
	rm -rf $(NAME)

re :
	make fclean
	make all

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -I $(INC_DIR) -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) : 
	mkdir $@
