#include <iostream>

using namespace std;

struct Node{
    string data;
    Node *left;
    Node *right;
};

Node *createNode(const string &data){
    Node *newNode = new Node();

    if (!newNode){
        cout << "error" << endl;
        return nullptr;
    }

    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void PREORDER(Node *root){

    if (root){
        cout << root->data << " ";
        PREORDER(root->left);
        PREORDER(root->right);
    }
}

void POSTORDER(Node *root){

    if (root){
        POSTORDER(root->left);
        POSTORDER(root->right);
        cout << root->data << " ";
    }
}

void INORDER(Node *root){

    if (root){
        INORDER(root->left);
        cout << root->data << " ";
        INORDER(root->right);
    }
}

int main(){

    Node *root = createNode("*");
    root->left = createNode("+");
    root->left->left = createNode("^");
    root->left->right = createNode("3");
    root->left->left->left = createNode("a");
    root->left->left->right = createNode("2");

    root->right = createNode("/");
    root->right->left = createNode("a");
    root->right->right = createNode("+");
    root->right->left->left = createNode("b");
    root->right->left->right = createNode("c");

    cout << "tree traversal in direct order: ";
    PREORDER(root);
    cout << endl;
    cout << "tree traversal in reverse order: ";
    POSTORDER(root);
    cout << endl;
    cout << "tree traversal in a symmetrical order: ";
    INORDER(root);
    cout << endl;
    return 0;
}
