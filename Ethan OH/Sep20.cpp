#include <iostream>
#include <cmath>
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

int palindromeDistance(int* arr, int n){
//    if (n == 2){
//        //compare elements. If the same, if so, do nothing, if not then increment return value
//    }

    if (n == 0){
        return 0;
    }
    else{
        int first = arr[0];
        int last = arr[n-1];

        if (first == last){
            return palindromeDistance(arr + 1, n - 2);
        }
        else{
            //not mirrored, so we want to keep track of how many items we've hit
            return palindromeDistance(arr + 1, n - 2) + 1;
        }
    }
}

//CHALLENGE: double palindrome question

int func(int n){
    int i, j, count;

    count = 0;
    for (i = 1; i <= log(n); i *= 2){
        cout << "i: " << i << " | ";
        for (j = 1; j <= i; j++){
            count += 1;
            cout << "  " << count;
        }
        cout << endl;
    }
}


int main(){
    func(100);
    return 0;
}