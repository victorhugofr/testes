PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o
SRC = src/
BUILD = build/
BIN = bin/
$(PROG) : $(OBJS)
		$(CC) $(OBJS) -o $(PROG)
		mv *.o $(BUILD)
		mv $(PROG) $(BIN)

main.o:
	$(CC) $(CPPFLAGS) -c $(SRC)main.cpp
clean: 
	rm -f *.o exec