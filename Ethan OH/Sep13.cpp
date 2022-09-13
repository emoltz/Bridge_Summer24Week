#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int factorial(int n){
    //base case
    if (n <= 1){
        return 1;
    }
    else{ //inductive step
        return n * factorial(n-1);
    }
}

int fibonacci(int n){ // the nth number of the sequence
    //preceding two numbers add up to the next number

    //base case
    if(n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


bool isSorted(int s[], int length){
    // return true or false if the array is sorted or not

    //base case
    if(length == 1){
        return true;
    }
    else{ //"inductive" step
        //compare first and second
        if (s[0] <= s[1]){
            if(isSorted(s + 1, length - 1)){
                return true;
            }
        }
        else{
            return false;
        }
    }
    return false;
}


const int LIMIT = 6;
int main(){
    int x = 5;
    cout << fibonacci(20);
    int n = 5;

    int *arr = new int[5]{1, 2, 3, 4, 5};

    return 0;
}