#include "node.h"


node::node()
{
  end = false;
  map<char, vector<node*>> next;
}

node::~node()
{

}

bool node::hasChild(char c)
{
  return next[c].size() != 0;
}

node* node::getNext(char c)
{
  return next[c][0];
}

bool node::isEnd()
{
  return end;
}

void node::setEnd(bool b)
{
  end = b;
}

vector<char> node::getChildren()
{
  return children;
}

void node::getAllWords(vector<string>* output, string soFar)
{
  if (end)
  {
    //If this is the end of a word, push what you've found so far.
    output->push_back(soFar);
  }
  for (int i = 0; i<children.size(); ++i)
  {
    next[children[i]][0]->getAllWords(output, soFar+children[i]);
  }
}

node* node::addChild(char c)
{
  node* newNode = new node();
  next[c].push_back(newNode);
  children.push_back(c);
  return newNode;
}
