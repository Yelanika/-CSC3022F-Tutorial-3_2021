CC = g++
CCFLAGS = -std=c++2a

driver.exe: driver.o 
	$(CC) $(CCFLAGS) driver.o -o driver.exe 

driver.o: driver.cpp 
	$(CC) $(CCFLAGS) -c driver.cpp -o driver.o

clean:
	rm *.o driver.exe