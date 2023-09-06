#include <iostream>

using namespace std;

const int MAX_NODES = 10;

struct Node{
    int label;
    Node *parent;
    Node *leftmostChild;
    Node *rightSibling;
    Node(int lbl) : label(lbl), parent(nullptr), leftmostChild(nullptr),
                    rightSibling(nullptr) {}
};

class Tree{
    private:
    Node *root;
    Node *nodes[MAX_NODES];
    int nodeCount;

    public:
    Tree() : root(nullptr), nodeCount(0) {}

    Node *createNode(int label){
        Node *newNode = new Node(label);
        nodes[nodeCount++] = newNode;
        return newNode;
    }

    void setParent(Node *child, Node *parent){
        child->parent = parent;
        if (parent->leftmostChild == nullptr){
            parent->leftmostChild = child;
        }
        else{
            Node *sibling = parent->leftmostChild;
            while (sibling->rightSibling != nullptr){
                sibling = sibling->rightSibling;
            }
            sibling->rightSibling = child;
        }
    }

    Node *PARENT(Node *node){
        if (node == root || node == nullptr){
            return nullptr;
        }
        return node->parent;
    }

    Node *LEFTMOST_CHILD(Node *node){
        if (node == nullptr){
            return nullptr;
        }
        return node->leftmostChild;
    }

    Node *RIGHT_SIBLING(Node *node){
        if (node == nullptr){
            return nullptr;
        }
        return node->rightSibling;
    }

    int LABEL(Node *node){
        if (node == nullptr){
            return -1;
        }
        return node->label;
    }

    Node *getRoot(){
        return root;
    }

    void ROOT(Node *node){
        root = node;
    }
};

int main(){
    Tree tree;
    Node *n1 = tree.createNode(1);
    Node *n2 = tree.createNode(2);
    Node *n3 = tree.createNode(3);
    Node *n4 = tree.createNode(4);
    Node *n5 = tree.createNode(5);
    Node *n6 = tree.createNode(6);

    tree.ROOT(n1);
    tree.setParent(n2, n1);
    tree.setParent(n4, n2);
    tree.setParent(n3, n1);
    tree.setParent(n5, n3);
    tree.setParent(n6, n3);

    Node *parent = tree.PARENT(n3);
        if (parent != nullptr){
            cout << "parent(n3) = " << tree.LABEL(parent) << endl;
        }
        else{
            cout << "parent(n3) = -1" << endl;
        }

    Node *leftmostChild = tree.LEFTMOST_CHILD(n2);
        if (leftmostChild != nullptr){
            cout << "leftmost child(n2) = " << tree.LABEL(leftmostChild)
                << endl;
        }
        else{
            cout << "leftmost child(n2) = -1" << endl;
        }

    Node *rightSibling = tree.RIGHT_SIBLING(n5);
        if (rightSibling != nullptr){
            cout << "right sibling(n5) = " << tree.LABEL(rightSibling) << endl;
        }
        else{
            cout << "right sibling(n5) = -1" << endl;
        }

    Node *root = tree.getRoot();
        if (root != nullptr){
            cout << "root(T) = " << tree.LABEL(root) << endl;
        }
        else{
            cout << "root(T) = -1" << endl;
        }
    return 0;
}
