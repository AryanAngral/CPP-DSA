#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    bool rightThread;
    Node(int val) : data(val), left(NULL), right(NULL), rightThread(false) {}
};

Node* leftMost(Node* n) {
    while (n && n->left) n = n->left;
    return n;
}
void inorder(Node* root) {
    Node* cur = leftMost(root);
    while (cur) {
        cout << cur->data << " ";
        if (cur->rightThread)
            cur = cur->right;
        else
            cur = leftMost(cur->right);
    }
}
// Only demonstration of structure and traversal
int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->rightThread = true;
    root->right->right = NULL;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    return 0;
}
