#include <iostream>
using namespace std;

int main(){
    int userInput = 7;
    char letter = 'a';
    char space = ' ';

    int outsideSpaceLimit = userInput - 1;
    int insideSpaceLimit = 0;

    for (int i = 1; i < (userInput * 2); i++) {
        // outside spaces
        for (int j = 0; j < outsideSpaceLimit; j++) {
            cout << space;
        }
        // first letter

        cout << letter;

        //inside spaces
        for (int j = 0; j < insideSpaceLimit; j++) {
            cout << space;
        }

        //second letter
        if (i != 1 && i != ((userInput * 2) -1)){
            cout << letter;
        }

        if(i < userInput){
            letter++;
            insideSpaceLimit += 2;
            outsideSpaceLimit--;
        }
        else{
            letter--;
            insideSpaceLimit -= 2;
            outsideSpaceLimit++;
        }

        cout << endl;
    }


    return 0;
}