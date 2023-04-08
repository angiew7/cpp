#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;
Node::Node(){
}
Node::Node(int newValue) {
  value = newValue;
  right = NULL;
  left = NULL;

}
Node::~Node(){
  left = NULL;
  right = NULL;

}
int Node::getValue() {
  return value;  
}
void Node::setValue(int num){
  value = num;
}
Node* Node::getRight(){
  return right;
}
void Node::setRight(Node* Right){
  right = Right;
}
Node* Node::getLeft(){
  return left;
}
void Node::setLeft(Node* Left){
  left = Left;
}




