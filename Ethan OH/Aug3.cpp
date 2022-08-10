#include <iostream>

using namespace std;

//GOAL: print a triangle with letters
/*
 *        a
 *      b  b
 *     c c  c
 *     ...etc
 */

void makeTriangle(int n) {

    char star = '*';
    char space = ' ';

    int spacesBegin = n - 1; //4
    int starsBegin = 1;

    for (int i = 0; i < n; i++) { //rows!
        //spaces
        for (int j = 0; j < spacesBegin; j++) {
            cout << space;
        }

        //stars
        for (int j = 0; j < starsBegin; j++) {
            cout << star;
        }

        cout << endl;
        spacesBegin--;
        starsBegin += 2;
    }

}

void makeLetterTriangle(int n) {
    char letter = 'a';
    char space = ' ';

    int spacesBegin = n - 1; //4
    int starsBegin = 1;

    for (int i = 0; i < n; i++) { //rows!
        //spaces
        for (int j = 0; j < spacesBegin; j++) {
            cout << space;
        }

        //stars
        for (int j = 0; j < starsBegin; j++) {
            cout << letter;
            letter++;
        }

        cout << endl;
        spacesBegin--;
        starsBegin += 2;
        letter = 'a'; //reset back to a
    }
}


void doubleTriangle(int n) {
    char star = '*';
    char space = ' ';
    int starLimit = 1;
    int spaceLimit = 2 * n - 2; //8

    for (int i = 0; i < (2 * n - 1); i++) { //LINES
        //stars1
        for (int j = 0; j < starLimit; j++) {
            cout << star;
        }
        //spaces
        for (int j = 0; j < spaceLimit; j++) {
            cout << space;
        }

        //stars2
        for (int j = 0; j < starLimit; j++) {
            cout << star;
        }

        cout << endl;

        if (i < n - 1) {
            starLimit++;
            spaceLimit -= 2;
        } else {
            starLimit--;
            spaceLimit += 2;
        }
    }


}

void letterNumber(){
    string s = "57afh6461";
    for (int i = 0; i < s.length(); i++) {
         //IF the character is between 0 and 9, then print it
         if (s[i] >= '0' && s[i] <= '9'){
             cout << s[i];
         }
    }
}


int main() {

//    makeTriangle(5);
//    makeLetterTriangle(5);
    doubleTriangle(5);
//    letterNumber();
    return 0;

}