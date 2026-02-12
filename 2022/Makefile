CC = gcc
CFLAGS = -Wall -Wextra -O2 -MMD -MP
BIN_DIR = ../bin/2022
SRCS = $(wildcard *.c)
PROGS = $(SRCS:.c=)
DEPS = $(SRCS:.c=.d)

all: $(BIN_DIR) $(PROGS)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

%: %.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $(BIN_DIR)/$@

-include $(DEPS)

clean:
	rm -f $(BIN_DIR)/* *.o *.d

.PHONY: all clean
