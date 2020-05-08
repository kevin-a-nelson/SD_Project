#include <iostream>
using namespace std;

class UltimateFrisbee
{
    int size;
    float *data;

public:
    UltimateFrisbee()
    {
        size = 0;
        data = 0;
    }
    UltimateFrisbee(int s)
    {
        size = s;
        data = new float[size];
    }
    UltimateFrisbee(const UltimateFrisbee &d)
    {
        int s;
        size = d.size;
        data = d.data;
    }
    ~UltimateFrisbee()
    {
        cout << "bye!" << endl;
        if (data)
            delete[] data;
    }

    void display()
    {
        cout << "size " << size << endl;
    }
};

int main()
{
    UltimateFrisbee g1, g2(3);

    g1.display();
    g2.display();

    UltimateFrisbee g3(g1);

    g3.display();
}
