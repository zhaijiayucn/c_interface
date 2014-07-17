


OBJ = $(patsubst %.c, %.o, $(wildcard *.c))
LIB = libc_interface.a

.PHONY: all move

all: $(LIB) move


$(LIB): $(OBJ)
	ar rcs $@ $^
move:
	mv $(LIB) $(LIBDIR)

clean:
	-rm $(OBJ)	
