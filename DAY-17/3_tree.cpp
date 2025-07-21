#include <iostream>
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

    Node* insert(Node* node, int val) {
        if (node == NULL) {
            return new Node(val);
        }
        if (val < node->data) {
            node->left = insert(node->left, val);
        } else {
            node->right = insert(node->right, val);
        }
        return node;
    }

    void inorder(Node* node) {
        if (node == NULL) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (node == NULL) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    Node* search(Node* node, int key) {
        if (node == NULL || node->data == key) return node;
        if (key < node->data) return search(node->left, key);
        return search(node->right, key);
    }
};

int main() {
    BinaryTree tree;
    tree.root = tree.insert(tree.root, 50);
    tree.insert(tree.root, 30);
    tree.insert(tree.root, 70);
    tree.insert(tree.root, 20);
    tree.insert(tree.root, 40);
    tree.insert(tree.root, 60);
    tree.insert(tree.root, 80);

    cout << "Inorder: ";
    tree.inorder(tree.root);
    cout << endl;

    cout << "Preorder: ";
    tree.preorder(tree.root);
    cout << endl;

    cout << "Postorder: ";
    tree.postorder(tree.root);
    cout << endl;

    int key = 60;
    Node* found = tree.search(tree.root, key);
    if (found) cout << key << " found in tree." << endl;
    else cout << key << " not found in tree." << endl;

    return 0;
}
