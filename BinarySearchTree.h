#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE

// Needed:
// Data storage (array or nodes)
// Algorithms: search, insert, delete, traverse

Class BinaryTree{
 public:
  virtual ~BinaryTree();
 private:
  virtual bool search(int searched) const;
  virtual bool insert(Node* insertee);
  virtual bool delete(int deleteeData);
  virtual int* traverse() const;
};


Class Node{

 public:
  int getData() const;
  bool setData(int data);
  Node* getLeftChild() const;
  Node* getRightChild() const;
  bool setLeftChild(Node* newLeft);
  bool setRightChild(Node* newRight);
  Node(int data, Node* leftChild = NULL, Node* rightChild = NULL); 

 private:
  int data_;

  Node* leftChild_;
  Node* rightChild_;
 
}


Class NodeTree: BinaryTree {
 public:
  NodeTree(Node* parentNode);

 private:
  Node* parentNode_;
  Node* search(int searched);
  bool insert(Node* insertee);
  bool delete(Node* deletee);
  int* traverse(); //left to right, min to max
  Node* findMin(Node* rootNode);
};



#endif BINARYSEARCHTREE_H
