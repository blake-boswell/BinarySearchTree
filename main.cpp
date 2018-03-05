#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
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
    cout << endl;
    tree->remove(tree, 2);
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    cout << endl;
    tree->remove(tree, 1);
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    cout << endl;
    tree->remove(tree, 8);
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    cout << endl;
    tree->remove(tree, 7);
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
    tree->show();
    cout << endl;
    tree->search(tree, 6)->setData(10);
    cout << "Size: " << tree->size() << endl;
    cout << "Height: " << tree->height() << endl;
    cout << "isTree?: " << tree->check() << endl;
//    tree->search(tree, 1);
    return 0;
}