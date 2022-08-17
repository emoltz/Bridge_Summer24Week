#include <iostream>
#include <cmath>

using namespace std;

int function1(bool isThisTrue) {
    //any code here
    if (isThisTrue) {
        return 0;
    } else {
        return 1;
    }
}

void examples(){
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
}

void forLoopsRuntime(int n){
    for (int i = 0; i < 10000; i++) { //O(1)
        cout << i << endl;
    }

    for (int i = 0; i < n; i++) { //O(n)
        //some code
    }

    for (int i = 0; i < 3 * n; i++) { //O(n)
        //some code
    }

    for (int i = 0; i < n; i += 2) { //O(n)
        //code
    }

    for (int i = 0; i < pow(n, 2); i++) { //O(n^2)
        //code
    }

    for (int i = 0; i < n; i++) { //O(n^2)
        for (int j = 0; j < n; j++) {
            //some code
        }
    }

    for (int i = 0; i < 1000; i++) { //O(n)
        for (int j = 0; j < n; j++) {
            //some code
        }
    }

    for (int i = 0; i < n; i *= 2) { //O(log n)
        //some code
    }

    for (int i = 0; i < n; i *= 2) { //O(n log n)
        for (int j = 0; j < n; j++) {

        }
    }



}

int main() {
   forLoopsRuntime(100);

    return 0;
}