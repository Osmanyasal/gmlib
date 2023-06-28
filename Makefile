all:
	@ g++ -o test.app -std=c++11 *.cc
	@ ./test.app

clean:
	rm *.o test.app