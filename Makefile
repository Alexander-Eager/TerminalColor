test: test.o command.o color.o column.o column_group.o
	g++ -std=c++11 -g -o test $^

%.o: %.cpp
	g++ -std=c++11 -g -o $@ -c $^

clean:
	rm *.o test