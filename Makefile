NAME = libftprintf.a
TEST_NAME = test_printf
CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFTDIR = Libft
LIBFT = $(LIBFTDIR)/libft.a

# Fichiers de la bibliothèque (sans main.c)
SRCS = $(filter-out main.c, $(wildcard *.c))
OBJS = $(SRCS:.c=.o)

# Cible par défaut : crée la bibliothèque
all: $(NAME)

# Crée la bibliothèque libftprintf.a
$(LIBFT):
	make -C $(LIBFTDIR)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

# Crée l'exécutable de test
test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o $(TEST_NAME)

# Compilation des objets
%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFTDIR) -c $< -o $@

# Nettoyage
clean:
	rm -f $(OBJS)
	make -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME) $(TEST_NAME)
	make -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all test clean fclean re