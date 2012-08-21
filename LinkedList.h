#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

# first implementation based on strings
class SingleLinkedNode{
 public:
  std::string getData();
  bool setData(const string data);
  SingleLinkedNode* getNextNode();
  bool setNextNode(const SingleLinkedNode* nxtNode);
  SingleLinkedNode(string data, SingleLinkedNode* nxtNode);

 private:
  std::string data_;
  SingleLinkedNode* nextNode_;
};

class LinkedList{
 public:


 private:
  

};

#endif LINKEDLIST_H
