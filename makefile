CC=g++		# the compiler

all:dataBaseDriver

dataBaseDriver.o: dataBaseDriver.cpp 
	$(CC) -c -o dataBaseDriver.o dataBaseDriver.cpp -std=c++11 -I ./studentRecord_library/ -L ./studentRecord_library/ -lbrain_dead_studentRecord 


dataBaseDriver: dataBaseDriver.o
	$(CC) -o dataBaseDriver dataBaseDriver.o -std=c++11 -I ./studentRecord_library/ -L ./studentRecord_library/ -lbrain_dead_studentRecord


run:
	export LD_LIBRARY_PATH=studentRecord_library/ && ./dataBaseDriver

clean:
	@rm -f *.o
	@rm dataBaseDriver

install:
	@mv proggy ~/bin

