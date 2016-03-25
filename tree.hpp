#include <iostream>
using std::cout;
using std::cin;

template <class T>
struct Node
{
    T data;
    Node* left;
    Node* right;
    Node (T data)
	: data(data)
	, left(nullptr)
	, right(nullptr){}
};

// template <class T>
// class BinarySearchTree;
// std::ostream& operator<<(std::ostream &os, const BinarySearchTree &tree);

template <class T>
class BinarySearchTree
{
private:
    Node<T> *root;
public:
    BinarySearchTree(T value)
	{
	    root->data=value;
	    root->left=nullptr;
	    root->right=nullptr;
	}
    
    BinarySearchTree(const BinarySearchTree &right_t)
	{
	    root->data=right_t.root->data;
	    root->right=nullptr;
	    root->left=nullptr;
	    if (nullptr != right_t.root->right)
		root->right = new BinarySearchTree(*(right_t.root->right));
	    if (nullptr != right_t.root->left)
		root->left = new BinarySearchTree(*(right_t.root->left));
	}

    T operator = (const BinarySearchTree<T>  &right_t)
	{
	    if (this != &right)
		
		
		}    
    ~BinarySearchTree(){
	while ((root->left!=nullptr) &&
	       (root->right!=nullptr))
	    delete root->left, root->right;
    }    
    bool isLeaf(){
	if ((nullptr==left)&&(nullptr==right))
	    return true;
	else
	    return false;
    }    
    int getLevel(T value){ //get level for node with key=value
    }
    void add(T value){
    }
    void deleteNode(T value){
    }
    void printTree(){
    }
// friend std::ostream operator <<(std::ostream &os,
// 				    const BinarySearchTree &tree);
}
