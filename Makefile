polytest: clib.o main.o libwrap.o lib.o
	g++ -g -o polytest main.o clib.o libwrap.o lib.o

main.o: main.cpp lib.h
	g++ -g -c main.cpp

clib.o: clib.c clib.h
	gcc -g -c clib.c

libwrap.o: libwrap.cpp libwrap.h
	g++ -g -c libwrap.cpp

lib.o: lib.h lib.cpp
	g++ -g -c lib.cpp

clean:
	rm -f *.o polytest
