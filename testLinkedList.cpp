#include <iostream>
#include "LinkedList.h"


int main(){
  Node::Node headNode = Node::Node("head");

  std::cout << headNode.getData() <<std::endl;

  return 0;
}
