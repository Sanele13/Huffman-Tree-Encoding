//Sanele Mpangalala
#include "HuffmanNode.h"
#include "HuffmanTree.h"
#include <unordered_map>
using namespace std;

typedef bool(*ptr)(const MPNSAN005::HuffmanNode&,const MPNSAN005::HuffmanNode&);
	//order for the queue
bool compare(const MPNSAN005::HuffmanNode& a, const MPNSAN005::HuffmanNode& b)
{
	if(a < b){ 
		return true;
	}
	else{ 
		return false;
	}
}

MPNSAN005::HuffmanTree::~HuffmanTree(){
	root = nullptr; 
} 
	//build tree
void MPNSAN005::HuffmanTree::build(unordered_map<char, int>& Map){
	priority_queue<HuffmanNode, vector<HuffmanNode>,ptr> pq(compare);
	for(  auto iterator = Map.begin(); iterator != Map.end(); ++iterator){
		HuffmanNode node(iterator->first,iterator->second);
		pq.push(node);
   	}

	while(pq.size()>1){
		HuffmanNode combination;
		combination.left = make_shared<HuffmanNode>(pq.top());
		pq.pop();
		combination.right = make_shared<HuffmanNode>(pq.top());
		pq.pop();
		combination.setFrequency();
		pq.push(combination); 
	} 
	root = make_shared<HuffmanNode>(pq.top());
	pq.pop(); 
}
	//generate code     
void MPNSAN005::HuffmanTree::code(const MPNSAN005::HuffmanNode& N, string prefix, unordered_map<char,string>& map){
   if(N.getCharacter()!='\0'){
      map[N.getCharacter()] = prefix;
   }
   else{
      code(*(N.left), prefix+"0", map);	      // 0 to the left
      code(*(N.right), prefix+"1", map);      // 1 to the right
   }



   
}
