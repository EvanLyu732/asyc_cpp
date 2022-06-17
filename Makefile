all:
	 rm -rf build && mkdir build && cd build && cmake .. && make

.PHONY: clean

clean:
	rm -rf ./build && rm -rf `ls -rtd ./external/* | grep -v txt`
