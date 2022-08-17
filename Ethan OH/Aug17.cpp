#include <iostream>

using namespace std;

int function1(bool isThisTrue) {
    //any code here
    if (isThisTrue) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    string s = "hello";
    char c[5] = {'h', 'e', 'l', 'l', 'o'};
    //the above two lines are the same


    int arr[5] = {54, 13, 285, 58, 1};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    char tab = '\t';
    cout << 1 << tab << 2 << tab << 3 << tab << endl;
    cout << "\n" << "hello!" << "\n";

    int a = 5;
    int b = 6;

    if (a != b) {
        cout << "They are the same";
    } else {
        cout << "They are different";
    }

    cout << endl;
    bool itsTrue = false;
    cout << function1(itsTrue);

    return 0;
}