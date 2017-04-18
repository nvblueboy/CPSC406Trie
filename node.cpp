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

node* node::addChild(char c)
{
  node* newNode = new node();
  next[c].push_back(newNode);
  children.push_back(c);
  return newNode;
}
