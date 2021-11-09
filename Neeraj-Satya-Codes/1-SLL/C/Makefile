SRC:=$(wildcard *.c)
OBJ:=$(patsubst *.c, *.o, $(SRC))
CC:=gcc

sll.exe: $(OBJ)
	$(CC) -o $@ $^

clean:
	rm *.exe

