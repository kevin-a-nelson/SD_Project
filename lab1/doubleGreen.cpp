#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
    init();

    read_image("small.ppm");

    int width, height;
    get_image_dimensions(width, height);
   //get uchar 
    //unsigned char g = 30, r = 30, b = 30;
    for (int i = 0; i<(16*width*height); i+=3) {
     unsigned char g = get_uchar_at(i+1);
     
     put_uchar_at(i+1, g*2);
     
     
    }

    write_image("output.ppm");

    quit();
}