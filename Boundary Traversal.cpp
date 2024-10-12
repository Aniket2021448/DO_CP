#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class Solution {
public:
    void traverseLeft(Node* root, vector<int>& ans) {
        Node* node = root;
        while (node) {
            if (node->left == NULL && node->right == NULL) {
                break;
            }
            ans.push_back(node->data);
            if (node->left != NULL) {
                node = node->left;
            } else {
                node = node->right;
            }
        }
    }
    
    void traverseLeafNodes(Node* root, vector<int>& ans) {
        if (root == NULL) {
            return;
        }
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return;
        }
        traverseLeafNodes(root->left, ans);
        traverseLeafNodes(root->right, ans);
    }
    
    void traverseRight(Node* root, vector<int>& ans) {
        vector<int> temp;
        Node* node = root;
        while (node) {
            if (node->left == NULL && node->right == NULL) {
                break;
            }
            temp.push_back(node->data);
            if (node->right != NULL) {
                node = node->right;
            } else {
                node = node->left;
            }
        }
        for (int i = temp.size() - 1; i >= 0; i--) {
            ans.push_back(temp[i]);
        }
    }
    
    vector<int> boundary(Node* root) {
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }
        ans.push_back(root->data);

        // Traverse left boundary (excluding leaf nodes)
        traverseLeft(root->left, ans);
        
        // Traverse all leaf nodes
        traverseLeafNodes(root->left, ans);
        traverseLeafNodes(root->right, ans);
        
        // Traverse right boundary (excluding leaf nodes) in reverse
        traverseRight(root->right, ans);

        return ans;
    }
};

// Helper function to create a new Node
Node* newNode(int data) {
    return new Node(data);
}

// Function to insert nodes in level order
Node* insertLevelOrder(vector<int>& arr, int i, int n) {
    if (i >= n || arr[i] == -1) {
        return NULL;
    }
    Node* root = newNode(arr[i]);
    root->left = insertLevelOrder(arr, 2 * i + 1, n);
    root->right = insertLevelOrder(arr, 2 * i + 2, n);
    return root;
}

int main() {
    string input;
    cout << "Enter the tree nodes as a series of numbers (-1 for NULL nodes): ";
    getline(cin, input);
    stringstream ss(input);
    vector<int> nodes;
    int num;
    while (ss >> num) {
        nodes.push_back(num);
    }

    Node* root = insertLevelOrder(nodes, 0, nodes.size());

    Solution sol;
    vector<int> result = sol.boundary(root);

    // Print the boundary traversal
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
