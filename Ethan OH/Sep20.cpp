#include <iostream>
using namespace std;

int countZeroes(int nums[], int len, int startIdx){
    //just to count the number of zeroes in an array (recursive)

    //base case option 1: when size of array is 1

    //base case option 2: array is empty

    //base case option 3: when start index is = length
    if(startIdx == len){
        return 0;
    }
    //how to count the 0s recursively?
    if (nums[startIdx] == 0){
        return countZeroes(nums, len, startIdx + 1) + 1;
    }
    else{
        //another recrusive statement
        return countZeroes(nums, len, startIdx + 1);
    }
}

int maxZeroLengthIterative(int nums[], int len, int startIdx){
    //for loop with two conditions
    int result = 0;
    int count = 0;

    for (int i = 0; i < len; i++) {
        if(nums[i] == 0){
            count++;
            result = max(result, count);
        }
        else{
            //reset counter
            count = 0;
        }
    }
    return result;
}

int maxZeroLengthRecursive(int nums[], int len, int startIdx){
    if (startIdx == len){
        return 0;
    }

    int count = 0;
    //if I see a 0, keep track of how many I've seen, and then move to the next item
    while (startIdx < len && nums[startIdx++] == 0){
        count++;
    }
    return max(count, maxZeroLengthRecursive(nums, len, startIdx));
}

int maxZeroLength(int arr[], int size, int num){
    if(size == 1){
        return num + (arr[size - 1] == 0);
    }
    else if (arr[size - 1] == 0){
        return maxZeroLength(arr, size - 1, num + 1);
    }
    else{
        return max(num, maxZeroLength(arr, size - 1, 0));
    }
}



int main(){
    int arr[6] = {0, 0, 1, 0 , 0 ,0};
    cout << maxZeroLength(arr, 6, 0);
    return 0;
}