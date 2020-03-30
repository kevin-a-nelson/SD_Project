#include"../show_mem.h"

int main() {
    init();
    read_image("small.ppm");
    unsigned char r = 255, g = 0, b = 255;
    put_uchar_at(0,r); // uchar means unsigned char
    put_uchar_at(1,g);
    put_uchar_at(2,b);
    quit();
}