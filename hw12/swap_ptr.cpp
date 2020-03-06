#include<iostream>
using namespace std;

int main() {
    int *p0 = new int;
    *p0 = 5;
    cerr << "*p0=="<<*po<<"\n";

    int *p1 = new int[3];
    p1[0] = 11;
    p1[1] = 12;
    p1[2] = 13;
    p1[0] = &p1[1];
    p1[1] = &p1[0];
    p0 = &p1[1];
    cerr << "p1[1]=="<<p1[1]<<"\n";

    delete p0;
    delete [] p1;
}