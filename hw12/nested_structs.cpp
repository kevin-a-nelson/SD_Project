#include<iostream>
using namespace std; 

struct Devices {
    int num_phones;
    int num_laptops;
   }
 double InClass(Devices d){
    return d.num_phones/d.num_laptops;
}
int main() {
    Devices duringclass;
    duringclass.num_phones = 7;
    duringclass.num_laptops = 23;

    double uufda = InClass(duringclass);
    cerr << "Ususally there are "<<uufda<<" phones and laptops used during class"<<endl;
}
