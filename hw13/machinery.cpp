#include<iostream>
using namespace std;

struct Town {
    int num_inhabitants; 
};

struct Machinery {
    int num_blanking_lights;
    double price;
    double price_per_person(Town t) {
        return price/t.num_inhabitants;
    }
    void increase_price_by(double extra) {
        price += extra;
    }
    double copy_price_to(Machinery m) {
        price = m.price;
    }
};

int main() {
    Machinery GNE472{1024, 555444.33};
    Machinery GNE475{512, 111222.33};
    GNE475.copy_price_to(GNE472);
    cerr << GNE472.price << endl;
}