#include <iostream>
using namespace std;

int func(int arg)
{
    arg = arg + 2;
    return arg;
}

int funcp(int *argp)
{
    *argp = (*argp) + 2;
    return *argp;
}

int main()
{
    int i = 17;
    double f = -4.2;
    int *ip = &i;
    double *fp = &f;
    *fp = 1.5 * *fp;
    i = 3 * i;
    double f2 = 2.5;
    fp = &f2;
    i *= *ip;

    cerr << "func(i) returns " << func(i);
    cerr << ", i is " << i << ", *ip is " << *ip << endl;

    cerr << "func(*ip) returns " << func(*ip);
    cerr << ", i is " << i << ", *ip is " << *ip << endl;

    cerr << "func(ip) returns " << funcp(ip);
    cerr << ", i is " << i << ", *ip is " << *ip << endl;

    cerr << "func(i) returns " << funcp(&i);
    cerr << ", i is " << i << ", *ip is " << *ip << endl;

    cout << "i is " << i << endl;
    cout << "f is " << f << endl;
    cout << "ip is " << ip << endl;
    cout << "fp is " << fp << endl;
    cout << "f2 is " << f2 << endl;
}
