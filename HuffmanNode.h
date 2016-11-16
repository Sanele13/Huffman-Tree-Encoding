//Sanele Mpangalala

#ifndef HUFFMANODE_H
#define HUFFMANODE_H

#include <iostream>
#include <memory>
using namespace std;
namespace MPNSAN005{
	class HuffmanNode{
		private:
			char character;
			int frequency;
		
		public:
			shared_ptr<HuffmanNode> right; //right node
			shared_ptr<HuffmanNode> left;  //left node
			HuffmanNode();
			HuffmanNode(char c, int f);
			~HuffmanNode(); //destructor
			
			HuffmanNode(const HuffmanNode& N); //copy constructor
			HuffmanNode(HuffmanNode&& N); //move constructor

			bool operator<(const HuffmanNode& N) const; //less than operator
			HuffmanNode& operator=(const HuffmanNode& N ); //assignment operator
			HuffmanNode& operator=(HuffmanNode&& N); //move assignment operator
			
			//methods to get private data-getters and setters
			char getCharacter() const;
			int getFrequency() const;
			void setFrequency();

	};

}
#endif
