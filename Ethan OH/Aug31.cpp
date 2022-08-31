#include <iostream>
#include <vector>
using namespace std;

void introPointers(){
    int arr[5] = {1, 2, 3, 4, 5};
    int x, n;
    x = 5;
    n = 6;

    int *pointer = &x;



    cout << "pointer: " << *pointer << endl << "x: " << x;

//    cout << pointer << endl << &x << endl << &n;



}

void doublePointer(){
    int var = 10;
    int *pointer = &var;
    *pointer = 20;

    int **pointer2 = &pointer;
}

int timesFive(int *x){
    *x = 10;
    return *x * 5;
    //main:
//    int x = 3;
//    timesFive(&x);
//    cout << "x = " << x;

}

void arrays(){
    int *arr = nullptr;
    int limit;
    cout << "How big do you want your array?";
    cin >> limit;
    arr = new int[limit];

    for(int i = 0; i < limit; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < limit; i++){
        cout << arr[i] << endl;
    }

    delete[] arr;
    arr = nullptr;
}

void vectors(){
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    v.size();
}


int main(){


    return 0;
}