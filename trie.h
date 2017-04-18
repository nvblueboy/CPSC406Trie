#include <iostream>
#include "node.h"


using namespace std;

#ifndef TRIE_H
#define TRIE_H

class trie{
public:
  trie();
  ~trie();
  void addWord(string s);
  bool isWord(string s);
  node* getBaseNode();
  vector<string>* getWordsFromBase(string s);
private:
  node* baseNode;
};




#endif
