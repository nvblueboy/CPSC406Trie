#include "trie.h"


trie::trie()
{
  baseNode = new node();
}

trie::~trie()
{
  delete baseNode;
}

void trie::addWord(string s)
{
  node* curr = baseNode;
  for (int i = 0; i<s.length(); ++i)
  {
    char c = s[i];
    if (!curr->hasChild(c))
    {
      curr = curr->addChild(c);
    } else {
      curr = curr->getNext(c);
    }
  }
  curr->setEnd(true);
}

bool trie::isWord(string s)
{
  node* curr = baseNode;
  for (int i = 0; i<s.length(); ++i)
  {
    char c = s[i];
    if (!curr->hasChild(c))
    {
      return false;
    } else {
      curr = curr->getNext(c);
    }
  }
  if (curr->isEnd())
  {
    return true;
  } else {
    return false;
  }
}

vector<string>* trie::getWordsFromBase(string s)
{
  vector<string>* output = new vector<string>();
  node* curr = baseNode;
  for (int i = 0;i<s.length(); ++i)
  {
    char c = s[i];
    if (!curr->hasChild(c))
    {
      return output;
    } else {
      curr = curr->getNext(c);
    }
  }
  curr->getAllWords(output,s);
  return output;
}

node* trie::getBaseNode()
{
  return baseNode;
}
