all: programa.exe

run: programa.exe
	./programa.exe

	
programa.exe: main.o cliente.o contabancaria.o
	g++ main.o cliente.o contabancaria.o -o programa.exe

main.o: main.cpp header.h
	g++ -Wall -c main.cpp

cliente.o: cliente.cpp header.h
	g++ -Wall -c cliente.cpp

contabancaria.o: contabancaria.cpp header.h
	g++ -Wall -c contabancaria.cpp

clean:
	del *.o *.exe




