// Author: Blake Boswell
// Synopsis: This file is used to test out the BinarySearchTree class

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "BinarySearchTree.h"

using namespace std;

int main() {
    BinarySearchTree* tree = new BinarySearchTree(5);
    BinarySearchTree* result;
    // tree->show();
    tree->insert(tree, 3);
    tree->insert(tree, 4);
    tree->insert(tree, 2);
    tree->insert(tree, 1);
    tree->insert(tree, 7);
    tree->insert(tree, 6);
    tree->insert(tree, 8);
    tree->insert(tree, 9);
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    tree->remove(tree, 2);
    cout << "Removing 2" << endl;
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    tree->remove(tree, 1);
    cout << "Removing 1" << endl;
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    tree->remove(tree, 8);
    cout << "Removing 8" << endl;
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    tree->remove(tree, 7);
    cout << "Removing 7" << endl;
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    tree->search(6)->setData(10);
    cout << "Set 6 to 10, to test the check function out" << endl;
    tree->show();
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;

    // Empirical study
    cout << "\n\nEmpirical Study\n\n" << endl;

    int count = 1;
    srand(time(NULL));
    BinarySearchTree* test = new BinarySearchTree(rand() % 1000000);

    clock_t start;
    double duration;
    start = clock();

    while(count < 1000000) {
        // cout << count << endl;
        if(test->insert(test, rand())) {
            count++;
        }
    }
    duration = (clock() - start) / (double) CLOCKS_PER_SEC;
    cout << "Size: " << test->size() << endl;
    cout << duration << " seconds to insert " << count << " nodes!" << endl;

    return 0;
}