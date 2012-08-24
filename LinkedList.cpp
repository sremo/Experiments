#include "LinkedList.h"


Node::Node(std::string data, Node::Node* nxtNode)
  :
  data_(data), nextNode_(nxtNode)
{}

Node::Node(std::string data)
  :
  data_(data), nextNode_(NULL)
{}

std::string Node::getData(){
  return this->data_;

}

bool Node::setData(std::string data){
  this->data_ = data;
  return true;
}

Node::Node* Node::getNextNode(){
  return this->nextNode_;

}

bool Node::setNextNode(Node* nxtNode){
  this->nextNode_ = nxtNode;
  return true;
}

int SingleLinkedList::insertNodeEnd(Node* insNode){
  Node* curr = this->head;
  while(curr){
    curr = curr->getNextNode();
  }
  curr->setNextNode(insNode);
  return 0;
}

int SingleLinkedList::insertNodeBeg(Node* insNode){
  insNode->setNextNode(this->head);
  this->head = insNode;
  return 0;
}

int SingleLinkedList::searchNode(std::string data){
  Node* curr = this->head;
  while(curr){
    if(!data.compare(curr->getData())) return 0; 
    //    if(!(std::strcpm((curr->getData()).c_str(),data.c_str()))) return 0;
    curr = curr->getNextNode();
  }
  return 1;
}

int SingleLinkedList::deleteNode(std::string data){
  Node* prv = this->head;
  Node* curr;
  while(prv){
      curr = prv->getNextNode();
      if(curr && !data.compare(curr->getData())){//std::strcmp((curr->getData()).c_str(),data.c_str())){
        prv->setNextNode(curr->getNextNode());
        return 0;
      }
      prv = curr;
  }
  return 1;
  
}

Node* SingleLinkedList::returnListHead(){
  return this->head;
}



SingleLinkedList::SingleLinkedList()
  : 
  head(NULL)
{}


SingleLinkedList::SingleLinkedList(Node* headNode)
    : 
  head(headNode)
  {}
