#include <iostream>
#include <stack>

using namespace std;

class Node {
public:
    int _data;
    Node *_rightChild;
    Node *_leftChild;
    Node *_parent;
    Node *_sibling;
    Node(){
        _data = 0;
        _rightChild = nullptr;
        _leftChild = nullptr;
    }
    Node(int x) {
        _data = x;
        _rightChild = nullptr;
        _leftChild = nullptr;
    }
};

class BST {
public:
    Node *head;

    BST() {
        head = nullptr;
    }


    void insert(int x) { //iterative

        /* does the tree exist?
         * if it doesn't exist, then add the node to the head
         * otherwise...
         *  iterate through the tree according to the value x to find the spot where the node will be inserted.
         *      Starting at the head, it's going to look at the value `_data`.
         *      IF x is greater than the head._data, then go right
         *      otherwise, go left.
         *
         *   if x is less than the current node's key, then insert to the left.
         *   otherwise, insert to the right
         */

        if (head == nullptr){
            head = new Node(x);
        }
        else{
            Node* current = head;
            while (current != nullptr){
                if (current->_data < x){
                    //go left
                    current = current->_leftChild;
                }
                else{
                    current = current->_rightChild;
                }
            }
            current = current->_parent;
            if (current->_data < x){
                current->_leftChild = new Node(x);
            }
            else if (current->_data > x){
                current->_rightChild = new Node(x);
            }
        }

    }

    bool isLeaf(){
        // determine if tree is empty
    }

    void insertRecursive(BST* T, int x){
        if (T->isLeaf()){
            // where does the new node go?
            // if x is greater than T->data, insert right, otherwise insert left
        }
        else{
            if (T->_data < x){
                insertRecursive(T->left, x);
            }
            else{
                insertRecursive(T->right, x);
            }

        }

    }

};


template<class T>
T addNumbers(T x, T y) {
    return x + y;
}


template<class T, class K>
T addNumbers(T x, K y) {
    return x + y;
}


int main() {
    cout << addNumbers('a', 5);

    return 0;
}