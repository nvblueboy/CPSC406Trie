#include <iostream>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

#ifndef NODE_H
#define NODE_H

class node{
public:
  node();
  ~node();
  node* getNext(char c);
  bool hasChild(char c);
  bool isEnd();
  void setEnd(bool b);
  node* addChild(char c);
  vector<char> getChildren();
private:
  map<char, vector<node*>> next;
  vector<char> children;
  bool end;
};

#endif
