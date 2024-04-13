INCLUDE := -I ~/include
LDFLAGS := -L ~/lib -lsense -lm

all: scroll
scroll: input.o main.o display.o
	cc -o scroll input.o main.o display.o $(LDFLAGS)

clean:
	rm -f *.o scroll
main.o: main.c display.h
	cc -c main.c -I ~/include
display.o: display.c display.h
	cc -c display.c -I ~/include
input.o:
	cc -c input.c -I ~/include

run: scroll
	./scroll

commit:
	git commit -a
	git push
