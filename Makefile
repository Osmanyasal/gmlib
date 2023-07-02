all:
	@ g++ -o ./test/test.app -std=c++11 ./src/main.cc ./test/test.cc -I./src/data/ -I./test/
	@ ./test/test.app

clean:
	rm *.o test.app
