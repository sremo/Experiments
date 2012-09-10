#include "BinarySearchTree.h"



Node::Node(int data, Node::Node* leftChild = NULL, Node::Node* rightChild = NULL)
  :
  data_(data), leftChild_(leftChild), rightChild_(rightChild)
{}


int Node::getData() const{
  return this->data_;
}

bool Node::setData(int data){
  this->data_ = data;
  return (this->data_ == data);
}

Node::Node* Node::getLeftChild() const{
  return this->leftChild_;
  
}
Node::Node* Node::getRightChild() const{
  return this->rightChild_;
  
} 


bool Node::setLeftChild(Node::Node* newLeft){

  this->leftChild_ = newLeft;
  return (this->leftChild == newLeft);
}

bool Node::setRightChild(Node::Node* newRight){

  this->rightChild_ = newRight;
  return (this->rightChild == newRight);
}


NodeTree::NodeTree(Node* parentNode)
  :
  parentNode_(parentNode)
{}

bool NodeTree::search(int searched){
  Node::Node* currNode = this->parentNode_;
  currValue = currNode->getData();
  while(currValue != searched){
    if(searched > currValue ){
      currNode = this->getRightChild();
      if(!currNode){
        return NULL;
      }
      currValue = currNode->getData();
    }
    if(searched < currValue){
      currNode = this->getRightChild();
      if(!currNode){
        return NULL;

      }
      currValue = currNode->getData();
    }
    

  }
  return currNode;;

}


bool NodeTree::insert(Node::Node* insertee){
  Node::Node* currNode = this->parentNode_;
  Node::Node* prevNode = this->parentNode_;
  int inserteeData = insertee->getData();
  int currData;
  while(currNode){
    currData = currNode->getData();
    if(inserteeData > currData){
      prevNode = currNode;
      currNode = currNode->getRightChild();
    }
    if(inserteeData < currData){
      prevNode = currNode;
      currNode = currNode->getLeftChild();
    }
    if(inserteeData==currData){
      return true;
    }

  }
  if(inserteeData > currData){
    prevNode->setRightChild(insertee);
  }else{
    prevNode->setLeftChild(insertee);
  }
  return true;
  

}

Node::Node* NodeTree::findMin(Node::Node* rootNode){
  
  Node::Node* currNode = rootNode;
  Node::Node* prevNode = rootNode;
  int minTree = -100;
  while(currNode){
    minTree = currNode->getData();
    prevNode = currNode;
    currNode = currNode->getLeftChild();
    
  }

  return prevNode;;

}

bool NodeTree::delete(Node::Node* deletee){
  Node::Node* currNode = this->parentNode_;
  int currData;
  while(currNode){
    currData = currNode->getData();
    

  }

  if(deletee->getLeftNode() && deletee->getRightNode()){
    Node::Node* minNode = this->findMin(deletee->getRightNode());
    deletee->setData(minNode->getData());
    this->delete(minNode());

  }else if(deletee->getLeftNode()){
    Node::Node* newNode = deletee->getLeftNode();
    deletee->setData(newNode->getData());
    deletee->setRightChild(newNode->getRightChild());
    deletee->setLeftChild(newNode->getLeftChild());

  }else if(deletee->getRightNode()){
    Node::Node* newNode = deletee->getRightNode();
    deletee->setData(newNode->getData());
    deletee->setRightChild(newNode->getRightChild());
    deletee->setLeftChild(newNode->getLeftChild());

  }else{

  }

}
