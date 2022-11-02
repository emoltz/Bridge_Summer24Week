#include <iostream>
#include <queue>
#include <stack>
#include <list>
#include <fstream>
#include <string>
#include <istream>
#include <iterator>

using namespace std;

struct Node {
    int _data;
    string _name;
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

    Node* begin(){
        return _head;
    }

    Node* end(){
        return _tail;
    }

    void clear() {
        //delete all the nodes in the list
        Node *here = _head;
        Node *next = nullptr;

        while (here != nullptr) {
            next = here->_next;
            delete here;
            here = next;
        }

        cout << "the list has been cleared!";
    }

    void addNode(int data, string name) {
        // create a new node and add it to the head
        Node *temp = new Node;
        temp->_data = data;
        temp->_name = name;
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
            cout << itr->_data << " " << itr->_name << endl;
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

    bool search(int x) {
        Node *itr = _head;
        while (itr != nullptr) {
            if (itr->_data == x) {
                return true;
            } else {
                //we haven't found it!
                itr = itr->_next;
            }
        }
        return false;
    }

};

void iterators() {
    vector<int> v = {1, 2, 3, 4, 5};

    //declare an iterator
    vector<int>::iterator itr;

    for (itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << endl;
    }
}

void fileInput() {
    string filename = "sample.txt";
    ifstream in_stream(filename);
    ofstream out_stream;

//    in_stream.open(filename);
    //if the file is open, then do this, otherwise, present an error message
    if (in_stream.is_open()) {
//        cout << "It opened!";
    } else {
        cout << "Error" << endl;
        cout << "What is the filename?" << endl;
        cin >> filename;
        in_stream.clear();
        in_stream.open(filename);

    }

    LinkedList l;

    int tempData;
    string tempName;
    char tempChar;

    // "load" the linked list
    in_stream >> tempData;
    in_stream.ignore(1);
    getline(in_stream, tempName, '|');
    cout << tempName;

    while (in_stream >> tempData >> tempName) {
        cout << tempData << " " << tempName;
        cout << endl;
    }
}

int main() {
    string filename = "sample.txt";
    ifstream in_stream(filename);
    ofstream out_stream("output.txt");

    //if the file is open, then do this, otherwise, present an error message
    if (!in_stream.is_open()) {
        cout << "Error" << endl;
        cout << "What is the filename?" << endl;
        cin >> filename;
        in_stream.clear();
        in_stream.open(filename);
    }

    LinkedList l;

    int tempData;
    string tempName;


    // "load" the linked list
    in_stream >> tempData >> tempName;
    l.addNode(tempData, tempName);
    in_stream.ignore(1);

    while(in_stream >> tempData >> tempName){
        l.addNode(tempData, tempName);
    }

//    l.display();

    Node* itr = l.begin();
    while(itr != nullptr){
        out_stream << itr->_name << endl;
        itr = itr->_next;
    }


    return 0;
}