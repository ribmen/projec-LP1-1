#include <iostream>
#ifndef "HEADER4.HPP"
#define "HEADER4.HPP"
using namespace std;

int main( ) {
    int x, y;
    string greets = greeting( );
    cout << greets << endl;
    cin >> x >> y;
    int result = sum(x, y);
    cout << result << endl;

    return 0;
}

string greeting( ) {
    string hello = "How is it doing? \n Enter 2 numbers: ";
    return hello;
}

float sum( int x1, int x2 ) {
    return x1 + x2;
}

