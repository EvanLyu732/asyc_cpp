all:
	 cd build && cmake .. && make

.PHONY: clean

clean:
	rm -rf ./build
