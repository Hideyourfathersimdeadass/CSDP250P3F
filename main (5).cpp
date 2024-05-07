//Kaleigha Hayes
//1313037
//05/03/2024
//Project 03

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BST.h"

using namespace std;

int main() {
    srand(time(nullptr));

    // Generate 40 random natural numbers
    const int numOfN = 40;
    int numbers[numOfN];
    cout << "Generated Numbers: ";
    for (int i = 0; i < numOfN; ++i) {
        numbers[i] = rand() % 100;   // Generate random number
        cout << numbers[i] << " ";   // Print the generated number
    }
    cout << endl;

    // Create a binary search tree
    BST bst;
    // Insert each generated number into the binary search tree
    for (int i = 0; i < numOfN; ++i) {
        bst.insert(numbers[i]);
    }

    // Perform traversals and output the results
    bst.inO();
    bst.preO();
    bst.postO();

    return 0;
}
