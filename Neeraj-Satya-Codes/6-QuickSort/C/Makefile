SRC:=$(wildcard *.c)
OBJ:=$(patsubst *.c, *.o, $(SRC))
CC:=gcc

qsort.exe: $(OBJ)
	$(CC) -o $@ $^

clean:
	rm *.exe
