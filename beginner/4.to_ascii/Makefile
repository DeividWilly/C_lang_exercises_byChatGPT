CC = gcc
CFLAGS = -Wall -Wextra -O2
SRC = main.c
OBJ = $(SRC:.c=.o)
EXEC = -

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

