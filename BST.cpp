//Kaleigha Hayes
//1313037
//05/03/2024
//Project 3


#include "BST.h"
#include <iostream>

using namespace std;

// Constructor for the binary search tree class
BST::BST() : root(nullptr) {}

// Helper function to recursively insert a node into the tree
TreeNode* BST::insertNode(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);   // Create a new node if the tree is empty
    }
    // Recursively insert the value into the left or right subtree
    if (val < root->data) {
        root->left = insertNode(root->left, val);
    } else if (val > root->data) {
        root->right = insertNode(root->right, val);
    }
    return root;
}

// Function to insert a value into the binary search tree
void BST::insert(int val) {
    root = insertNode(root, val);
}

// Helper function for in-order traversal
void BST::inOTraversal(TreeNode* root) {
    if (root != nullptr) {
        inOTraversal(root->left);   // Traverse left subtree
        cout << root->data << " ";      // Print current node
        inOTraversal(root->right);  // Traverse right subtree
    }
}

// Helper function for pre-order traversal
void BST::preOTraversal(TreeNode* root) {
    if (root != nullptr) {
        cout << root->data << " ";      // Print current node
        preOTraversal(root->left);  // Traverse left subtree
        preOTraversal(root->right); // Traverse right subtree
    }
}

// Helper function for post-order traversal
void BST::postOTraversal(TreeNode* root) {
    if (root != nullptr) {
        postOTraversal(root->left);   // Traverse left subtree
        postOTraversal(root->right);  // Traverse right subtree
        cout << root->data << " ";        // Print current node
    }
}

// Function to perform in-order traversal of the binary search tree
void BST::inO() {
    cout << "In-order traversal: ";
    inOTraversal(root);
    cout << endl;
}

// Function to perform pre-order traversal of the binary search tree
void BST::preO() {
    cout << "Pre-order traversal: ";
    preOTraversal(root);
    cout << endl;
}

// Function to perform post-order traversal of the binary search tree
void BST::postO() {
    cout << "Post-order traversal: ";
    postOTraversal(root);
    cout << endl;
}
