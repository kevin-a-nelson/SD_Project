#include<iostream>
using namespace std;

int main () {
    int x = 7;
    int &b = x;
    cerr << "b is  " << b << endl;
    b = 5;
    cerr << "x is " << x << endl;
    
}