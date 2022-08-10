#include <iostream>
using namespace std;

int main(){

    char inLetter;
    cout << "Enter a lowercase lowerCase: " << endl;
    cin >> inLetter;

    char lowerCase = 'a';
    char upperCase = 'A';
    char space = ' ';
    int n = (int)inLetter - (int)lowerCase + 1;

    int spaceLimit = n - 1;
    int letterLimit = 1;



    for (int i = 0; i < n; i++) {
        //SPACES
        for (int j = 0; j < spaceLimit; j++) {
            cout << space;
        }

        //LETTERS
             //if the row number is even or odd, put out a different lowerCase
        if(i % 2 == 0){ //odd row
            //lower cases

            /*
             * Strategy one: use the number 32 to change the values
             * Strategy two: store capital letters and swap between them
             */
            for (int j = 0; j < letterLimit; j++) {
                cout << lowerCase;
            }

        }
        else{
            //upper cases
            for (int j = 0; j < letterLimit; j++) {
                cout << upperCase;

            }
        }

        spaceLimit--;
        letterLimit += 2;
        lowerCase++;
        upperCase++;

        cout << endl;

    }
}