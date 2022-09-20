#include <iostream>
using namespace std;

void seven_a(int *n, int* m, int n_size, int m_size){ //O(nm)
    for (int i = 0; i < n_size; i++) {
        for (int j = 0; j < m_size; j++) {
            // Some O(1) operation here
        }
    }
}


void seven_b(int n){ //O(n^2)
    for (int i = 0; i < n; i++) {
        cout<< "i: " << i + 1<< " | j: ";
        for (int j = 0; j < i; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}


void seven_c(int n){ //O(log n)
    for (int i = n; i >= 0; i /= 2) {
        for (int j = 0; j < 1000; j++) {
            //O(1) operations
        }
    }
}

void moveZeroes(int nums[], int n){
    int j = 0;
    for (int i = 0; i < n; i++){
        if (nums[i] != 0){
            nums[j++] = nums[i];
        }
    }

    for (int i = j; i < n; i++){
        nums[i] = 0;
    }
}

int maxZeroLengthRecursive(int nums[], int len, int startIdx){
    if (len == startIdx){
        return 0;
    }
    int temp1 = 0, temp2 = 0;
    if (nums[startIdx] == 0){
        temp1 = maxZeroLengthRecursive(nums, len, startIdx + 1) + 1;
    }
    else{
        temp2 = maxZeroLengthRecursive(nums, len, startIdx + 1);
    }
    return max(temp1, temp2);
}


int main(){
//    seven_b(10);

    return 0;
}