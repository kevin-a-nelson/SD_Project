#include"../show_mem.h"

int main() {
    init();
    read_image("tiny.ppm");
    unsigned char r = 0, g = 255, b = 0;
    put_uchar_at(0,r);
    put_uchar_at(1,g);
    put_uchar_at(2,b);
    quit();
}