CC=g++ 

libbrain_dead_studentRecord.so: studentRecord.o
	$(CC) -o libbrain_dead_studentRecord.so studentRecord.o -fPIC -shared -std=c++11 


studentRecord.o: studentRecord.cpp
	$(CC) -c -o studentRecord.o studentRecord.cpp -fPIC -shared -std=c++11 


clean:
	@rm -f *.o
	@rm *.so

install:
	@mv proggy ~/bin
