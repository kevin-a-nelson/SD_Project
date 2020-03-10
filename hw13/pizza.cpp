#include<iostream>
using namespace std;

struct Town {
    double total_pizza;
    double show_change() {
        return pizza_for_students();
        int pfs=total_pizza-pizza_for_students();
        return pfs;
    }
    double eat_more(){
        return total_pizza+total_pizza/10;
    };
    double num_students(){
        return 50000;
    };
    double pizza_for_students(){
        return total_pizza/num_students();
    };

    double per_capita(){
        return total_pizza/num_inhabitants;
    };
    int num_inhabitants;
    void greet() {
        cerr << "hello!" << endl;
    };
};

int main(){
    Town northfield {500000.1, 20007};
    Town faribault {400000, 23750};
    northfield.per_capita();
    northfield.num_students();
    northfield.pizza_for_students();
    northfield.eat_more();

    cerr << northfield.pizza_for_students();
    cerr << faribault.pizza_for_students();
    cerr << northfield.eat_more() << " "<< endl;

}