<typename T>
struct Node
{
    T value;
    Node* left;
    Node* right;
};

template <typename T> //??
class BinarySearchTree;
std::ostream& operator<<(std::ostream &os, const BinarySearchTree &tree);

template <typename T>
class BinarySearchTree
{
private:
    Node n;
public:
    BinarySearchTree(T value);
    BinarySearchTree(const Node &right);
    ~BinarySearchTree();
    bool isLeaf();
    int getLevel(T value); //get level for node with key=value
    void put(T value); 
    void deleteNode(T value);
    void printTree();
    friend std::ostream operator <<(std::ostream &os,
				    const BinarySearchTree &tree);
}
