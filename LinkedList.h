#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <string>

class Node{
 public:
  std::string getData();
  bool setData(std::string data);
  Node* getNextNode();
  bool setNextNode(Node* nxtNode);
  Node(std::string data, Node* nxtNode);
  Node(std::string data);
 private:
  std::string data_;
  Node* nextNode_;
};

class SingleLinkedList{
 public:
  int insertNodeEnd(Node* insNode);
  int insertNodeBeg(Node* insNode);
  int deleteNode(std::string data);
  int searchNode(std::string data);
 private:
  Node* head;
};

class DoubleLinkedNode : Node {
 public:
  %std::string getData();
  %bool setData(std::string data);
  %Node* getNextNode();
  %bool setNextNode(DoubleLinkedNode* nxtNode);
  %bool setPrevNode(DoubleLinkedNode* prvNode);
  DoubleLinkedNode* getPrevNode();
  bool setPrevNode(DoubleLinkedNode* prvnode);
  DoubleLinkedNode(std::string data, DoubleLinkedNode* prvNode, DoubleLinkedNode* nxtNode);
  DoubleLinkedNode(std::string data);
 private:
  DoubleLinkedNode* prevNode;
};
#endif LINKEDLIST_H
