#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Node {
public:
    char data;
    Node* left;
    Node* right;
    Node(char val) : data(val), left(NULL), right(NULL) {}
};

Node* constructTree(string postfix) {
    stack<Node*> st;
    for (char ch : postfix) {
        if (isalnum(ch)) {
            st.push(new Node(ch));
        } else {
            Node* node = new Node(ch);
            node->right = st.top(); st.pop();
            node->left = st.top(); st.pop();
            st.push(node);
        }
    }
    return st.top();
}
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main() {
    string postfix = "ab+ef*g*-";
    Node* root = constructTree(postfix);
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    return 0;
}
