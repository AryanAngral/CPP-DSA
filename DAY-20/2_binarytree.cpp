#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class BinaryTree {
public:
    Node* root;
    BinaryTree() : root(NULL) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!root) {
            root = newNode;
            return;
        }
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* temp = q.front(); q.pop();
            if (!temp->left) {
                temp->left = newNode;
                return;
            } else q.push(temp->left);
            if (!temp->right) {
                temp->right = newNode;
                return;
            } else q.push(temp->right);
        }
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
};

int main() {
    BinaryTree tree;
    tree.insert(1);
    tree.insert(2);
    tree.insert(3);
    tree.insert(4);
    tree.insert(5);
    cout << "Inorder: ";
    tree.inorder(tree.root);
    cout << endl;
    return 0;
}
