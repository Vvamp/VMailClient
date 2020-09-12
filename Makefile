
libs += -lvmime


main.o: main.cpp
	g++ -o main main.cpp $(libs)

run: main.o
	./main 

clean: 
	rm -rf main.o main