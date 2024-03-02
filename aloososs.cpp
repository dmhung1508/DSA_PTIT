#include <bits/stdc++.h>
using namespace std;
struct Node {
    Node *left;
    Node *right;
    Node() : left(nullptr), right(nullptr) {}
};
bool isFullBinaryTree(Node* node){
    if (node == nullptr)
        return true;
    if (node->left == nullptr && node->right == nullptr)
        return true;
    if (node->left != nullptr && node->right != nullptr)
        return isFullBinaryTree(node->left) && isFullBinaryTree(node->right);
    return false;
}
void insertNode(map<int, Node*>& nodes, int parent, int child, char dir) {
    if (nodes.find(parent) == nodes.end())
        nodes[parent] = new Node();
    if (nodes.find(child) == nodes.end())
        nodes[child] = new Node();
    Node* pNode = nodes[parent];
    if (dir == 'L')
        pNode->left = nodes[child];
    else if (dir == 'R')
        pNode->right = nodes[child];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, Node*> nodes;
        int u, v;
        char x;
        for (int i = 0; i < n; ++i) {
            cin >> u >> v >> x;
            insertNode(nodes, u, v, x);
        }
        Node* root = nodes.begin()->second;
        cout << (isFullBinaryTree(root) ? "1" : "01") << endl;
        for (auto& node : nodes)
            delete node.second;
    }
    return 0;
}
