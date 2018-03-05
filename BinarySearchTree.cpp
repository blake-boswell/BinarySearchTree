//
// Created by blake on 3/3/2018.
//
#include "BinarySearchTree.h"
#include <iostream>

using namespace std;

BinarySearchTree::BinarySearchTree(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

BinarySearchTree* BinarySearchTree::search(BinarySearchTree* root, int key) {
    if(root == nullptr) {
        // Tree is empty
        return nullptr;
    }
    if(root->data == key) {
        // Found the node
        return root;
    }
    if(root->data > key) {
        // Go down the left subtree
        return search(root->left, key);
    } else {
        // Go down the right subtree
        return search(root->right, key);
    }
}

bool BinarySearchTree::insert(BinarySearchTree* &root, int key) {
    if(root == nullptr) {
        root = new BinarySearchTree(-1);
        root->data = key;
        root->left = nullptr;
        root->right = nullptr;
        return true;
    }
    if(root->data == key) {
        // Data already exists
        return false;
    }
    if(root->data > key) {
        // Go down the left subtree
        return insert(root->left, key);
    } else {
        // Go down the right subtree
        return insert(root->right, key);
    }
}

void BinarySearchTree::removeBoth(BinarySearchTree* &root) {
    BinarySearchTree* temp = root;
    root = root->right;
    root->left = temp->left;
    delete temp;
}

void BinarySearchTree::removeNode(BinarySearchTree* & root) {
    if(root->left == nullptr && root->right == nullptr) {
        // Leaf node
        delete root;
        root = nullptr;
    } else if(root->left == nullptr) {
        // Single child on the right
        BinarySearchTree* temp = root;
        root = root->right;
        delete temp;
    } else if(root->right == nullptr) {
        // Single child on the left
        BinarySearchTree* temp = root;
        root = root->left;
        delete temp;
    } else {
        removeBoth(root);
    }
}

bool BinarySearchTree::remove(BinarySearchTree* &root, int key) {
    if(root == nullptr) {
        return false;
    }
    if(root->data == key) {
        removeNode(root);
    } else if(root->data > key) {
        return remove(root->left, key);
    } else if(root->data < key) {
        return remove(root->right, key);
    }
}

void BinarySearchTree::show() {
    if(this == nullptr) {
        return;
    }
    this->left->show();
    cout << this->data << ", ";
    this->right->show();

}

int BinarySearchTree::height() {
    if(this == nullptr) {
        return 0;
    }
    return 1 + max(this->left->height(), this->right->height());
}

int BinarySearchTree::sizeHelper(int& size) {
    if(this == nullptr) {
        return size;
    }
    size++;
    this->left->sizeHelper(size);
    this->right->sizeHelper(size);
    return size;
}

int BinarySearchTree::size() {
    int size = 0;
    return sizeHelper(size);
}

bool checkNodes(BinarySearchTree* left, BinarySearchTree* right) {

}

bool BinarySearchTree::check() {
    if(this == nullptr) {
        return true;
    }
    if(this->left == nullptr && this->right != nullptr) {
        return (this->data < this->right->data);
    }
    if(this->left != nullptr && this->right == nullptr) {
        return (this->data > this->left->data);
    }
    if(this->left->check() == false || this->right->check() == false) {
        return false;
    } else {
        return true;
    }
}

void BinarySearchTree::setData(int data) {
    this->data = data;
}

