//Sanele Mpangalala

#ifndef HELP_H 
#define HELP_H
#include <string>
#include <unordered_map>

using namespace std;
namespace MPNSAN005{
  string getFreq(string file, unordered_map<char, int>& Map);
  string compress(string input, unordered_map<char, string>& map);
}

#endif
