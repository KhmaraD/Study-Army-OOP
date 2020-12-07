clean:
	rm *.o
	
Compile_all:
	g++ action/*.cpp -c
	g++ spell/*.cpp -c
	g++ spellcaster/*.cpp -c
	g++ state/*.cpp -c
	g++ unit/*.cpp -c
	
all: Compile_all
	g++ main.cpp *.o
	a.exe