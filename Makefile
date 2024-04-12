

build:
	g++ -O2 -g ./src/client.cpp -o ./build/client
	g++ -O2 -g ./src/server.cpp -o ./build/server


.PHONY: build