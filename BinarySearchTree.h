//
// Created by blake on 3/3/2018.
//

class BinarySearchTree {
private:
    int data;
    BinarySearchTree* left;
    BinarySearchTree* right;

    int sizeHelper(int& size);

public:
    explicit BinarySearchTree(int data);
    BinarySearchTree* search(BinarySearchTree* root, int key);
    bool insert(BinarySearchTree* &root, int key);
    void removeBoth(BinarySearchTree* &root);
    void removeNode(BinarySearchTree* &root);
    bool remove(BinarySearchTree* &root, int key);
    void show();

    int height();
    int size();
    bool check();
    void setData(int data);
};
