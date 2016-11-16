//Sanele Mpangalala

#include "help.h"
#include <queue>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <functional>

string MPNSAN005::getFreq(string file, unordered_map<char, int>& Map){
   string input= "";
   ifstream in( file, ios::in);
   if(in.is_open()){
      char character;
      while (!in.eof() ) {
         in.get(character);
         if(character!='\n'){
            if(Map.count(character)>0){
              
               Map[character]+=1;
            }
            else{
            
               Map[character] = 1;
            }
            input+=character;
         }
      }
      in.close();
   }
   else{
      cout<<"Could not open the input file. "<<endl;
   }
   return input;
}


string MPNSAN005::compress(string input, unordered_map<char, string>& map){
   string output = ""; //bitstream

   for( int i =0; i< input.size(); i++){
      output+= map[input.at(i)]; //use code table 
      
   }  
   
   
   
      
   return output;
   
}

