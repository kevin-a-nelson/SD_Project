#include"../show_mem.h"
int main() {
    init(); //get ready to visualize memory

    unsigned short z1 = 3, z2 = 4;
    long k = 5;
    char y = 65;

    put_unsigned_short_at(0, z1); //place the bytes of s at position 0
    put_unsigned_short_at(1, z2);
    put_long_at(2, k);
    put_char_at(3, y);
    
    quit();
}