#include <iostream>
using namespace std;

//for loops
void forLoops(){
    for (int i = 100; i > 10; i-=3) {
        cout << i << " ";
    }

    cout << endl;
    int i = 100;
    while(i > 10){
        cout << i << " ";
        i -= 3;
    }

    int arr[5] = {1, 2, 3, 4, 5}; //static array
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0){
            cout << arr[i];
        }
        //break out of loop if we find a 2
        if(arr[i] == 2){
            break;
        }
    }

    cout << endl;

    int j = 0;
    do{
        j++;
    }
    while(j < 10);

}

void switchStatement(){
    string s = "Mo";
    string t = "Tu";

    if (s == t){
        cout << "true";
    }
    else{
        cout << "false";
    }
}

int times5(int n){
    int result = n * 5;
    return result;
}


int main(){
    int s = times5(10);
    cout << s;


    return 0;
}