#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <Windows.h>
using namespace std;

struct Node {
    char ch;
    float freq;
    Node* left, * right;
};

struct compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq;
    }
};

Node* createHuffmanTree(unordered_map<char, float> charFreq) {
    priority_queue<Node*, vector<Node*>, compare> pq;
    for (auto pair : charFreq) {
        Node* n = new Node();
        n->ch = pair.first;
        n->freq = pair.second;
        n->left = nullptr;
        n->right = nullptr;
        pq.push(n);
    }
    while (pq.size() != 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();
        Node* n = new Node();
        n->freq = left->freq + right->freq;
        n->left = left;
        n->right = right;
        pq.push(n);
    }
    return pq.top();
}

void createCodeTable(Node* root, string code, unordered_map<char, string>& huffmanCode) {
    if (!root) {
        return;
    }
    if (!root->left && !root->right) {
        huffmanCode[root->ch] = code;
    }
    createCodeTable(root->left, code + "0", huffmanCode);
    createCodeTable(root->right, code + "1", huffmanCode);
}

string encodeMessage(string message, unordered_map<char, string> huffmanCode) {
    string encodedMessage = "";
    for (char c : message) {
        encodedMessage += huffmanCode[c];
    }
    return encodedMessage;
}

string decodeMessage(string message, Node* root) {
    string decodedMessage = "";
    Node* current = root;
    for (char c : message) {
        if (c == '0') {
            current = current->left;
        }
        else {
            current = current->right;
        }
        if (!current->left && !current->right) {
            decodedMessage += current->ch;
            current = root;
        }
    }
    return decodedMessage;
}

int main() {

    unordered_map<char, float> charFreq = {
        {'a', 0.25}, {'b', 0.15}, {'c', 0.15}, {'d', 0.2}, {'e', 0.25}
    };

    Node* root = createHuffmanTree(charFreq);
    unordered_map<char, string> huffmanCode;
    createCodeTable(root, "", huffmanCode);

    string message = "abcde";
    string encodedMessage = encodeMessage(message, huffmanCode);
    cout << "coded message: " << encodedMessage << endl;

    string decodedMessage = decodeMessage(encodedMessage, root);
    cout << "decoded message: " << decodedMessage << endl;

    return 0;
}



