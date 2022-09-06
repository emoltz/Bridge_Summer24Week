#include <iostream>
#include <vector>
using namespace std;

typedef int* intP;
typedef int** doublePointer;


void function1(){
    int arrSize = 5;
    int* tempArr = new int[arrSize];
    //do stuff with the temp array

    //at the end of the function...
    delete[] tempArr;
    tempArr = nullptr;
}

void fivesOnly(int* arr, int arraySize, int*& outArray, int& outArraySize){ //take away any numbers that are not five

}

void swapArrays(int*& array1, int*& array2){
    int* tempArray = array1;
    array1 = array2;
    array2 = tempArray;
}

int numberOfFives(int arr[], int arrSize){
    int newArrSize = 0;
    arr[0] = 100;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == 5){
            newArrSize++;
        }
    }

    return newArrSize;
}

void oldMain(){
    intP pointer;
    doublePointer d;
    int *arr = NULL; //don't do this!
    int *arr2 = nullptr; //this is good

//    int arr[5] = {1, 5, 2, 5, 3};
//    int *outArray;
//    int outArraySize;
//
//    fivesOnly(arr, 5, outArray, outArraySize);
    int *x = new int[5]{1, 5, 3,4,5};
    int *y = new int[5]{10, 9 , 8, 7, 6};
//    swapArrays(x, y);



    cout << "Function: " << numberOfFives(x, 5) << endl;

    for (int i = 0; i < 5; i++) {
        cout << x[i] << endl;
    }
}

int main(){
    int lettersCount[100] = {};

    for (int i = 0; i < 100; i++) {
        lettersCount[i] = 5;
        cout << lettersCount[i] << " ";
    }


    return 0;
}