TARGET = mi_programa
SRCS = main.c linked_list.c stack.c
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
