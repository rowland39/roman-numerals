all : roman-numerals

roman-numerals : roman-numerals.o
	${CC} ${CFLAGS} -o $@ $?

clean :
	rm -f *.o *~ roman-numerals
