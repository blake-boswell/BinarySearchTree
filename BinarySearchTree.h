//
// Created by blake on 3/3/2018.
//

class BinarySearchTree {
private:
    int data;
    BinarySearchTree* left;
    BinarySearchTree* right;

    int sizeHelper(int& size);
    void removeBoth(BinarySearchTree* &root);
    void removeNode(BinarySearchTree* &root);
    void showInorder();
    void showPostorder();

public:
    explicit BinarySearchTree(int data);
    BinarySearchTree* search(int key);
    bool insert(BinarySearchTree* &root, int key);
    bool remove(BinarySearchTree* &root, int key);
    void show();
    int height();
    int size();
    bool check();

    // For debugging only
    void setData(int data);
};
