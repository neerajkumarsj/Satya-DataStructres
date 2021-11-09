SRC:=$(wildcard ./src/*.c)
OBJ:=$(patsubst ./src/*.c, ./share-headers/*.h, ./objs/*.o, $(SRC))
CC:=gcc

sll.exe: $(OBJ)
	$(CC) -o $@ $^

OBJ:

clean:
	rm *.exe

