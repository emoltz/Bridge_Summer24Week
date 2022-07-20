#include <iostream>
using namespace std;

int main(){
    double q = 5.0 / 9.0;
    //FLOAT uses 32 bits
    //DOUBLE uses 64 bits

    //"magic" formula for setting decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    //the number in the parens below can set the precision of the decimal points.
    cout.precision(2);
    cout << q;

    return 0;
}