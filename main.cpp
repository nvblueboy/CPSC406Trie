#include<iostream>
#include "trie.h"
#include "FileIO.h"
using namespace std;

int main(int argc, char** argv)
{
  trie myTrie;
  cout << "Reading file..." << endl;
  char* filename = (char*)"words.txt";
  vector<string> file = readFile(filename);
  cout << "Creating trie..." <<endl;
  for (int i = 0; i<file.size(); ++i)
  {
    myTrie.addWord(file[i]);
  }
  cout << "Done."<<endl<<endl;
  string word;
  cout << "Please input a word to use." << endl;
  cin >> word;
  cout << "Finding words..." << endl;
  vector<string> *words = myTrie.getWordsFromBase(word);
  cout << endl;
  if (words->size() == 0)
  {
    cout << "There are no words that start with " << word << "." <<endl;
    return 0;
  }
  cout << "Words that start with "<<word << endl;
  for (int i = 0; i<words->size(); ++i)
  {
    cout<<(*words)[i]<<endl;
  }
  return 0;
}
