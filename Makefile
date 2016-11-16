huffencode:   HuffmanNode.o HuffmanTree.o help.o Driver.o
	g++ -std=c++11 Driver.o HuffmanNode.o HuffmanTree.o help.o -o huffencode

HuffmanNode.o : HuffmanNode.cpp HuffmanNode.h
	g++ -std=c++11 -o HuffmanNode.o -c HuffmanNode.cpp
   
HuffmanTree.o : HuffmanTree.cpp HuffmanTree.h
	g++ -std=c++11 -o HuffmanTree.o -c HuffmanTree.cpp
   
help.o: help.cpp help.h
	g++ -std=c++11 -o help.o -c help.cpp   
     
Driver.o : Driver.cpp
	g++ -std=c++11 -o Driver.o -c Driver.cpp


clean:
	rm -rf *.o
