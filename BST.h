//Kaleigha Hayes
//1313037
//05/03/2024
//Project 3



#ifndef BST_H
#define BST_H

// Struct for a node in the binary search tree
struct TreeNode {
    int data;          // Data stored in the node
    TreeNode* left;    // Pointer to the left child node
    TreeNode* right;   // Pointer to the right child node
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}  // Constructor
};

// Class for the binary search tree
class BST {
private:
    TreeNode* root;   // Pointer to the root node of the tree

    // Helper function to recursively insert a node into the tree
    TreeNode* insertNode(TreeNode* root, int val);

    // Helper functions for traversing the tree
    void inOTraversal(TreeNode* root);
    void preOTraversal(TreeNode* root);
    void postOTraversal(TreeNode* root);

public:
    BST();            // Constructor
    void insert(int val);    // Function to insert a value into the tree
    void inO();          // Function to perform in-order traversal
    void preO();         // Function to perform pre-order traversal
    void postO();        // Function to perform post-order traversal
};

#endif
