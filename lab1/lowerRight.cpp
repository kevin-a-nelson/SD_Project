#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
    init();

    read_image("big.ppm");

    int width, height;
    get_image_dimensions(width, height);
    cerr << "width is " << width <<endl;

    unsigned char r = 255, g = 0, b = 255;
    put_uchar_at(3*width*height - 3, r);
    put_uchar_at(3*width*height - 2, g);
    put_uchar_at(3*width*height - 1, b);

    write_image("output.ppm");

    quit();
}