#include<iostream>
using namespace std;

int global_x = 4;
void f(int a) {
    cerr << " a is "<< a << endl;
    global_x++;
    cerr << " global_x is "<< global_x << endl; 
}
void g(int c){
    cerr << "c is " << c << endl;
    global_x+=5;
    cerr << "global_x is " << global_x << endl;

}
int main() {
    int b = 8;
    cerr << "global_x is " << global_x << endl;
    f(b);
    cerr << "global_x is" << global_x << endl;
    g(b);
    cerr <<"global_x is " << global_x << endl;


}