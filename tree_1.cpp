#include <iostream>

class BaseTree{
public:
  int val;
  BaseTree* right;
  BaseTree* left;
  BaseTree(){
  right = NULL;
  left = NULL;
  }
  BaseTree* createNodes(int);
};

BaseTree* BaseTree::createNodes(int value){
  BaseTree* newNode=new BaseTree();

  if(newNode){
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->val = value;
  }
  return newNode;
}

void displayTree(BaseTree* root){

  if(root==nullptr){
    std::cout << "empty !!!" <<std::endl;
    return;
  }

  std::cout << "value : " <<root->val << std::endl;
  std::cout <<"left node : ";
  displayTree(root->left);
  std::cout <<"Right node : ";
  displayTree(root->right);
  std::cout <<"next level \n" ;
}

int main(){
BaseTree* temp;
BaseTree* n1 = temp->createNodes(10);
BaseTree* n2 = temp->createNodes(12);
BaseTree* n3 = temp->createNodes(15);
BaseTree* n4 = temp->createNodes(8);
BaseTree* n5 = temp->createNodes(11);
BaseTree* n6 = temp->createNodes(24);

n1->left = n2;
n1->right = n3;
n2->left = n4;
n2->right = n5;
n3->left = n6;

displayTree(n1);

delete n1;
delete n2;
delete n3;
delete n4;
delete n5;
delete n6;


return 0;

}
