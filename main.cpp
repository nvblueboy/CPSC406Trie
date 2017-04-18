#include<iostream>
#include "trie.h"

using namespace std;

int main(int argc, char** argv)
{
  cout << "Hello world!" << endl;
  trie myTrie;
  myTrie.addWord("later");
  myTrie.addWord("loser");
  myTrie.addWord("late");
  myTrie.addWord("yoyo");

  cout << myTrie.isWord("later") << endl;
  cout << myTrie.isWord("lates") << endl;
  cout << myTrie.isWord("yo") << endl;

  return 0;
}
