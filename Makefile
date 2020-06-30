
compila:
	g++ *.cpp Headers/*.cpp -o Terminal.o

run: compila
	./Terminal.o

clean:
	rm Terminal.o
