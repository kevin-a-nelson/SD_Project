#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
    init();

    read_image("small.ppm");

    int width, height;
    get_image_dimensions(width, height);
   
    unsigned char g = 255, r = 0, b = 0;
    for (int i = 0; i<=(8*width*height); i+=3) {
     put_uchar_at(i, r);
     put_uchar_at(i+1, g);
     put_uchar_at(i+2, b);
     
    }

    write_image("output.ppm");

    quit();
}