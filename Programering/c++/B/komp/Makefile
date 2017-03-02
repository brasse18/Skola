CC = g++
LD = g++

INC_DIR = include
SRC_DIR = .

CFLAGS = -I$(INC_DIR) -Wall -O3

LDFLAGS =

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
PROG = test
RM = /bin/rm

all: $(PROG)

$(PROG): $(SRCS)
	$(CC) $(CFLAGS) $< -o $(PROG)

clean:
	$(RM) $(PROG)
