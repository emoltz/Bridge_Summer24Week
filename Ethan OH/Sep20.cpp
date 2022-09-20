#include <iostream>
using namespace std;
int palindromeDistance(int* arr, int n) {
    if (n == 0) {
        return 0;
    } else {
        int first = arr[0];
        int last = arr[n - 1];

        if (first == last) {
            return palindromeDistance(arr + 1, n - 2);
        } else {
            return palindromeDistance(arr + 1, n - 2) + 1;
        }
    }
}
int main(){
    int arr[6] = {1, 3, 6, 6, 5, 2};
    cout << palindromeDistance(arr, 6);

    return 0;
}