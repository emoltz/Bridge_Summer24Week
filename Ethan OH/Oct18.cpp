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

        cout << "the list has been cleared!";
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

    bool search(int x){
        Node *itr = _head;
        while(itr != nullptr){
            if(itr->_data == x){
                return true;
            }
            else{
                //we haven't found it!
                itr = itr->_next;
            }
        }
        return false;
    }

};

template <class T>
T addNumbers(T x, T y){
    return x + y;
}

template <class T, class K>
vector<K> addNumbers(T x, K y){

}


void MergeSortedIntervals(vector<int> &v, int l, int m, int r){
    //
}



int main() {
    LinkedList l;
    // add a node into the linked list
    l.addNode(5);
    l.addNode(10);
    l.display();
    vector<int> k;


    return 0;
}