#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Node;

class LinkedList;

class Node {
public:
    int _data;
    Node *_next;
};

class LinkedList {
private:
    Node *_head;
    Node *_tail;

public:
    LinkedList() {
        _head = nullptr;
        _tail = nullptr;
    }

    ~LinkedList(){
        clear();
    }

    void clear(){
        //delete all the nodes in the list
        Node *here = _head;
        Node *next = nullptr;

        while (here != nullptr){
            next = here->_next;
            delete here;
            here = next;
        }
    }

    void addNode(int n) {
        // create a new node and add it to the head
        Node *temp = new Node;
        temp->_data = n;
        temp->_next = nullptr;

        //if else -> there is no list
        if (_head == nullptr) {
            _head = temp;
            _tail = temp;
        } else { //there is a list
            _tail->_next = temp;
            _tail = _tail->_next;
        }
    }

    void addNodeNoTail(int n) {
        //pretend there is no _tail value!
        Node *temp = new Node;
        temp->_data = n;
        temp->_next = nullptr;

        if (_head == nullptr) {
            _head = temp;
        } else {
            //move through the list until we hit a nullptr
            Node *itr = _head;
            while (itr->_next != nullptr) {
                itr = itr->_next;
            }
            itr->_next = temp;
        }
    }

    void display() { //iterative
        Node *itr = _head;
        while (itr != nullptr) {
            cout << itr->_data << endl;
            itr = itr->_next;
        }
    }

    void displayRecursive(Node *itr) {
        //base case: there is no list, don't do anything!
        //otherwise...
        if (itr != nullptr) {
            cout << itr->_data << endl;
            displayRecursive(itr->_next);
        }
    }
};


int main() {
    LinkedList l;
    // add a node into the linked list
    l.addNode(5);
    l.addNode(10);
    l.display();

    return 0;
}