//Kaleigha Hayes
//1313037
//05/02/2024
//Project 3 F

Binary Search Tree Implementation in C++
 
Overview

This program demonstrates the implementation of a Binary Search Tree (BST) in C++. It generates 40 random natural numbers, constructs a BST using these numbers, and performs in-order, pre-order, and post-order traversals on the tree. The program is divided into several files:

- BST.h: Header file containing the declaration of the `BST` class and the `TreeNode` struct.
- BST.cpp: Source file containing the implementation of the `BST` class functions.
- main.cpp: Main program file where the BST is created, populated, and traversed.
- README.md: This file, providing detailed information about the program.

 Files

 BST.h

- TreeNode: This struct represents a node in the binary search tree. It contains an integer `data`, representing the value stored in the node, and pointers `left` and `right` to its left and right child nodes, respectively.
- BST: This class represents the binary search tree. It contains a private member `root`, which is a pointer to the root node of the tree. The class also declares functions for inserting a value into the tree and performing in-order, pre-order, and post-order traversals.

BST.cpp

- Constructor: The constructor of the `BST` class initializes the root pointer to `nullptr`.
- insertNode: This private helper function recursively inserts a new node with the given value into the tree.
- insert: This public function inserts a new value into the binary search tree by calling the `insertNode` function.
- inOTraversal: This private helper function performs an in-order traversal of the tree, printing the nodes in ascending order.
- preOTraversal: This private helper function performs a pre-order traversal of the tree, printing the nodes as they are encountered.
- postOTraversal: This private helper function performs a post-order traversal of the tree, printing the nodes after visiting their left and right subtrees.
- inO: This public function initiates an in-order traversal of the binary search tree.
- preO: This public function initiates a pre-order traversal of the binary search tree.
- postO: This public function initiates a post-order traversal of the binary search tree.

 main.cpp

- Main Function: The main function of the program is responsible for generating random numbers, creating a binary search tree, and performing traversals on the tree.
- Random Number Generation: It generates 40 random natural numbers less than 100 using the `rand()` function.
- Binary Search Tree Creation: It creates an instance of the `BST` class and inserts each generated number into the binary search tree.
- Traversals: It performs in-order, pre-order, and post-order traversals on the binary search tree and prints the traversal results.

Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. The program will display the generated numbers, followed by the in-order, pre-order, and post-order traversals of the constructed BST.
