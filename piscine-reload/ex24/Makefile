SHELL = bash

NAME = libft.a


SRC_PATH = srcs
INC_PATH = includes
BUILD_PATH = .build

FILES = ft_putchar.c
FILES += ft_putstr.c
FILES += ft_strcmp.c
FILES += ft_strlen.c
FILES += ft_swap.c

SRC = $(addprefix $(SRC_PATH)/, $(FILES))
OBJS = $(SRC:$(SRC_PATH)/%.c=$(BUILD_PATH)/%.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
CFLAGS += -g
INC += -I $(INC_PATH)

RM = rm -rf
AR = ar rcs
MKDIR = mkdir -p

all: $(BUILD_PATH) $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(BUILD_PATH):
	@echo "Creating $(BUILD_PATH)"
	$(MKDIR) $(BUILD_PATH)

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(RM) $(BUILD_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
