CC = gcc
OUT = main
SRCS = main.c
CFLAGS = -Wall
LDFLAGS = -lstrophe -lpthread

all: compilar

compilar: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(OUT) $(LDFLAGS)

.PHONY: clean

clean:
	rm $(OUT)
