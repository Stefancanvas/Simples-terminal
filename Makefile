
all:
	g++ *.cpp Headers/*.cpp -o Terminal

install: all
	mkdir -p ~/.local/bin/
	cp Terminal ~/.local/bin



run: all
	./Terminal

clean:
	rm Terminal
