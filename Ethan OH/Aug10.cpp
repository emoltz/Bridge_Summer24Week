#include <iostream>

using namespace std;

void letterTriangle() {
    char inLetter;
    cout << "Enter a lowercase lowerCase: " << endl;
    cin >> inLetter;

    char lowerCase = 'a';
    char upperCase = 'A';
    char space = ' ';
    int numberOfLines = (int) inLetter - (int) lowerCase + 1;

    int spaceLimit = numberOfLines - 1;
    int letterLimit = 1;


    for (int i = 0; i < numberOfLines; i++) {
        //SPACES
        for (int j = 0; j < spaceLimit; j++) {
            cout << space;
        }

        //LETTERS
        //if the row number is even or odd, put out a different lowerCase
        if (i % 2 == 0) { //odd row
            //lower cases

            /*
             * Strategy one: use the number 32 to change the values
             * Strategy two: store capital letters and swap between them
             */
            for (int j = 0; j < letterLimit; j++) {
                cout << lowerCase;
            }

        } else {
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

void diamond() {
    int n = 4;
    int lineLimit = 2 * n - 1;

    char star = '*';
    char space = ' ';
    int spaceLimit = n - 1;
    int starLimit = 1;

    for (int i = 0; i < lineLimit; i++) { //lines
        //spaces should start at n-1
        for (int j = 0; j < spaceLimit; j++) {
            cout << space;
        }

        //stars should start at 1, stop at 2n - 1
        for (int j = 0; j < starLimit; j++) {
            cout << star;
        }

        //if i is less than n then do this:
        if (i < n - 1) {
            spaceLimit--;
            starLimit += 2;
        } else {
            spaceLimit++;
            starLimit -= 2;
        }


        cout << endl;
    }
}

void hollowDiamond(){
    int n = 5;
    int lineLimit = 2 * n - 1;

    char star = '*';
    char space = ' ';
    int spaceLimit = n - 1;
    int starLimit = 1;
    int innerSpaceLimit = 0;

    for (int i = 0; i < lineLimit; i++) { //lines
        //spaces
        for (int j = 0; j < spaceLimit; j++) {

            cout << space;
        }


        //stars
        cout << star;

        //inner spaces
        for (int j = 1; j < innerSpaceLimit; j++) {
            cout << space;
        }


        //second star
        if(i != 0 && i != lineLimit - 1){
            cout << star;
        }



        //if i is less than n then do this:
        if (i < n - 1) {
            spaceLimit--;
            starLimit += 2;
            innerSpaceLimit += 2;
        } else {
            spaceLimit++;
            starLimit -= 2;
            innerSpaceLimit -= 2;
        }


        cout << endl;
    }

}

int main() {

    hollowDiamond();
    return 0;
}