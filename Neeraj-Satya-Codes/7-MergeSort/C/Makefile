SRC:=$(wildcard *.c)
OBJ:=$(patsubst *.c, *.o, $(SRC))
CC:=gcc

msort.exe: $(OBJ)
	$(CC) -g -o $@ $^

clean:
	rm *.exe
