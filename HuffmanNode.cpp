//Sanele Mpangalala

#include "HuffmanNode.h"
#include <vector>
#include <string>
#include <memory>

using namespace std;
using namespace MPNSAN005;
	//default constructor
MPNSAN005::HuffmanNode::HuffmanNode(){
  	character = '\0';  //initialise character
   	frequency = 0;     //initialise frequency
} 
	//constructor
MPNSAN005::HuffmanNode::HuffmanNode(char c, int f){
	character=c;
	frequency=f;
}
	//destructor
MPNSAN005::HuffmanNode::~HuffmanNode(){
	left = nullptr;
	right = nullptr;
   
} 
	//copy constructor
MPNSAN005::HuffmanNode::HuffmanNode(const HuffmanNode& N){
	character = N.getCharacter();
	frequency = N.getFrequency();
	left = N.left;
	right = N.right;
   
}
   
	//move constructor
MPNSAN005::HuffmanNode::HuffmanNode(HuffmanNode&& N){
	character = N.getCharacter();
	frequency = N.getFrequency();
	left = N.left;
	right = N.right;
	N.left = nullptr;
	N.right = nullptr;
	N.frequency = 0;
   
      
}
   
   //assignment operator
HuffmanNode& MPNSAN005::HuffmanNode::operator=( const HuffmanNode& N ){
   	if(this == &N){
      		return *this;
	}
	character = N.getCharacter();
	frequency = N.getFrequency();
	left = N.left;
	right = N.right;
   	return *this;
    
}
   //move assignment operator.
HuffmanNode& MPNSAN005::HuffmanNode::operator=(HuffmanNode&& N){
	if(this == &N){
		return *this;
	}
	character = N.getCharacter();
	frequency = N.getFrequency();
	left = N.left;
	right = N.right;
      
	N.left = nullptr;
	N.right = nullptr;
	N.frequency = 0;
      
   	return *this; 
}
	//less than operator
bool MPNSAN005::HuffmanNode::operator<(const HuffmanNode& N) const{
   	return (N.getFrequency()<frequency);
}
   	//set frequency
void MPNSAN005::HuffmanNode::setFrequency(){
	frequency = (*left).getFrequency() + (*right).getFrequency();
}
	//get frequency   
int MPNSAN005::HuffmanNode::getFrequency() const{
   	return frequency;
} 
  
  
char MPNSAN005::HuffmanNode::getCharacter() const{
   return character;
}
