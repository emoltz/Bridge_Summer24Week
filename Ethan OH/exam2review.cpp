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

int maxZeroLength(int nums[], int len, int startIdx){
    //base case -->
    if(startIdx == len){
        return 0;
    }
    int maxLen = 0;
    while (startIdx < len && nums[startIdx++] == 0){
        maxLen++;
    }
    return max(maxLen, maxZeroLength(nums, len, startIdx));
}


int main(){
//    seven_b(10);

    return 0;
}