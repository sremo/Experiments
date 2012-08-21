#include "LinkedList.h"


SingleLinkedNode::SingleLinkedNode(string data, SingleLinkedNode* nxtNode)
  :
  data(data_), nextNode(nxtNode)
{}

std::string getData(){
  return self.data_;

}

bool setData(const string data){
  self.data_ = data;
  return true;
}

SingleLinkedNode::SingleLinkedNode* getNextNode(){
  return self.nextNode_;

}

bool setNextNode(const
