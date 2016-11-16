//Sanele Mpangalala

#include <string>
#include <queue>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <iostream>
#include "HuffmanNode.h"
#include "HuffmanTree.h"
#include "help.h"


using namespace std;
using namespace MPNSAN005;

int main(int argc, char**  argv) {
   if(argc <3){
      cout<<"There should be at least two parameters."<<endl;
      return 0;
   }
  
  
   string inputFile = string(argv[1])+ ".txt";
   unordered_map<char, int> Map ; 
   string in = getFreq(inputFile, Map);
   
  
   
  
   //create map for the characters and codes.
   HuffmanTree tree;
   tree.build(Map);
     
   unordered_map<char, string> map;
   
  
   
   const HuffmanNode& Root = *(tree.root);
   
   tree.code(Root, "",map ); //build tree
   
   //output table to outputfile.hdr;
   string headerfile = string(argv[2])+".hdr" ;
   ofstream header(headerfile, ios::out);
	header<<map.size()<<"\n";
   	for(auto i = map.begin(); i != map.end(); ++i){
		cout<<(i->first)<<" "<<(i->second)<<endl;
		header<<(i->first)<<" "<<(i->second)<<"\n";
	}
	header.close();
	string output = compress(in, map);
    
	//write block of bytes to a file (bytes.txt)
     ofstream myfile;
     myfile.open ("bytes.txt");
     myfile <<output;
     myfile.close();
   
}
