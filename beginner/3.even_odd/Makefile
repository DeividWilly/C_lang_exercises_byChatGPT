CC = gcc
CFLAGS = -Wall -O2
SRC = main.c
OBJ = $(SRC:.c=.o)
EXEC = even_or_odd

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

