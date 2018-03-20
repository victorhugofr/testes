PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o dec.o imprimir.o corrida.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
dec.o: sapo.h
	$(CC) $(CPPFLAGS) -c dec.cpp
corrida.o: corrida.h
	$(CC) $(CPPFLAGS) -c corrida.cpp
imprimir.o: imprimir.h
	$(CC) $(CPPFLAGS) -c imprimir.cpp
clean: 
	rm -f *.o exec
