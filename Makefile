build:
	make clean
	gcc -Wall -std=c99 src/main.c `pkg-config --libs sdl2` -o game

run:
	./game

clean:
	rm -f game
