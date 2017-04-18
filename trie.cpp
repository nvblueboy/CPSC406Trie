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


node* trie::getBaseNode()
{
  return baseNode;
}
