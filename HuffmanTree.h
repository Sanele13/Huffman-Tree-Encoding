//Sanele Mpangalala

#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H

#include "HuffmanNode.h"
#include <memory>
#include <queue>
#include <unordered_map>

using namespace std;
namespace MPNSAN005{
   class HuffmanTree{    
   public:
      shared_ptr<HuffmanNode> root;
      ~HuffmanTree();
	
      void build(unordered_map<char,int>& Map);  //to build tree
      void code(const HuffmanNode& A, string prefix, unordered_map<char,string>& map);  //to get code

   };
}
#endif
